#include "lightSensor.h"

//////////////////////////////////////////////////////////////////////
//              Private Data and Function Prototypes                //
//////////////////////////////////////////////////////////////////////

static void initLightSensor();
static void initMultiplexerRegister();
static void initControlAndStatusRegister();
static void initDigitalInputDisableRegister();
static void startConversion();

//////////////////////////////////////////////////////////////////////
//              Function Implementation Section                     //
//////////////////////////////////////////////////////////////////////
uint8_t lightSensorValue = 0;

ISR(ADC_INTERRUPT_VECTOR) { lightSensorValue = ADCH; }

void initLightSensor()
{
   initMultiplexerRegister();
   initControlAndStatusRegister();
   initDigitalInputDisableRegister();
}

void initMultiplexerRegister()
{
   // Tell the ADC to use the AREF pin as the reference voltage
   ADMUX &= ~(1 << REFS1);
   ADMUX &= ~(1 << REFS0);

   // Input Channel Selections - 0101 (ADC5)
   ADMUX &= ~(1 << MUX3);
   ADMUX |= (1 << MUX2);
   ADMUX &= ~(1 << MUX1);
   ADMUX |= (1 << MUX0);

   // Left-adjust the data registers
   ADMUX |= (1 << ADLAR);
}

void initControlAndStatusRegister()
{
   // Enable the ADC
   ADCSRA |= (1 << ADEN);

   // Enable auto-trigger
   ADCSRA |= (1 << ADATE);

   // Enable ADC Interrupt
   ADCSRA |= (1 << ADIE);

   // Set the auto-trigger source to the ADC interrupt flag (free-running mode)
   ADCSRB &= ~(1 << ADTS2);
   ADCSRB &= ~(1 << ADTS1);
   ADCSRB &= ~(1 << ADTS0);

   // Setup ADC prescalar to division factor of 128 from system clock to ADC clock
   ADCSRA |= (1 << ADPS2);
   ADCSRA |= (1 << ADPS1);
   ADCSRA |= (1 << ADPS0);
}

void initDigitalInputDisableRegister()
{
   // We only need input on pin ADC5
   DIDR0 &= ~(1 << ADC5D);

   // Disable to rest of the pins to safe power
   DIDR0 |= (1 << ADC4D);
   DIDR0 |= (1 << ADC3D);
   DIDR0 |= (1 << ADC2D);
   DIDR0 |= (1 << ADC1D);
   DIDR0 |= (1 << ADC0D);
}

void startConversion() { ADCSRA |= (1 << ADSC); }

void startADCLightSensor()
{
   initLightSensor();
   startConversion();
}