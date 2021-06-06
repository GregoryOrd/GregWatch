#include "buttons.h"

#include "../timer/timeState.h"

ISR(PAUSE_BUTTON_INTERRUPT_VECTOR) { togglePaused(); }

void setupPauseButtonInterrupt()
{
   // Enable Pause Button Interrupt
   PAUSE_BUTTON_INTERRUPT_MASK_REGISTER |= (1 << PAUSE_BUTTON_INTERRUPT_ENABLE);

   // Use Falling Edge to Generate Interrupt
   PAUSE_BUTTON_INTERRUPT_CONTROL_REGISTER |= (1 << PAUSE_BUTTON_INTERRUPT_SENSE_CONTROL_1);
   PAUSE_BUTTON_INTERRUPT_CONTROL_REGISTER &= ~(1 << PAUSE_BUTTON_INTERRUPT_SENSE_CONTROL_0);
}
