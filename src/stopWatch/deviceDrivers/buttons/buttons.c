#include "buttons.h"

#include "../../timer/timer.h"

//////////////////////////////////////////////////////////////////////
//              Private Data and Function Prototypes                //
//////////////////////////////////////////////////////////////////////
static void setupButtonsDataDirectionRegister();
static void setupPinChangeInterruptControlRegister();
static void setupPinChangeMaskRegister();
static uint8_t perButtonInterruptServiceRoutine(uint8_t* const previousState, uint8_t buttonNumber);

//////////////////////////////////////////////////////////////////////
//              Function Implementation Section                     //
//////////////////////////////////////////////////////////////////////

static uint8_t previousButtonStates[4] = {0, 0, 0, 0};

uint8_t perButtonInterruptServiceRoutine(uint8_t* const previousState, uint8_t buttonNumber)
{
   uint8_t currentState = BUTTONS_INPUT_REGISTER & (1 << buttonNumber);
   if (currentState != *previousState)
   {
      if (currentState && !*previousState)
      {
         togglePaused();
      }
      return 1;
   }
   else
   {
      return 0;
   }
}

ISR(BUTTONS_INTERRUPT_VECTOR)
{
   uint8_t triggeringButtonFound = 0;
   for (int buttonNumber = 0; buttonNumber < NUM_BUTTONS; buttonNumber++)
   {
      triggeringButtonFound |= perButtonInterruptServiceRoutine(previousButtonStates + buttonNumber, BUTTON_PINS_STARTING_OFFSET + buttonNumber);
      if (triggeringButtonFound)
      {
         break;
      }
   }
}

void setupButtonsDataDirectionRegister()
{
   // Set the button pins as inputs
   BUTTONS_DDR &= ~(1 << BUTTON_1);
   BUTTONS_DDR &= ~(1 << BUTTON_2);
   BUTTONS_DDR &= ~(1 << BUTTON_3);
   BUTTONS_DDR &= ~(1 << BUTTON_4);
}

void setupPinChangeInterruptControlRegister()
{
   // Enable Pin Change interrupts for the buttons
   BUTTONS_PIN_CHANGE_INTERRUPT_REGISTER |= (1 << PCIE2);
}

void setupPinChangeMaskRegister()
{
   // Enable pin change interrupts on the pins for the buttons
   BUTTONS_PIN_CHANGE_MASK_REGISTER |= (1 << BUTTON_1);
   BUTTONS_PIN_CHANGE_MASK_REGISTER |= (1 << BUTTON_2);
   BUTTONS_PIN_CHANGE_MASK_REGISTER |= (1 << BUTTON_3);
   BUTTONS_PIN_CHANGE_MASK_REGISTER |= (1 << BUTTON_4);
}

// PCICR
void initButtons()
{
   setupButtonsDataDirectionRegister();
   setupPinChangeInterruptControlRegister();
   setupPinChangeMaskRegister();
}
