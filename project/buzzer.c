#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"

void buzzer_init() //pretty much the same code from demos
{
  timerAUpmode();
  P2SEL2 &= ~(BIT6 | BIT7);
  P2SEL &= ~BIT7;
  P2SEL |= BIT6;
  P2DIR = BIT6;
}

void buzzer_set_period(short cycles)
{
  CCR0 = cycles;
  CCR1 = cycles >> 1;
}

void buzzer_tune()
{
  float a = 880;
  float b = 494;
  float c = 523; //these are randomly picked i want to have proper notes for next lab

  float playNotes[10] = (a,b,c,c,a,b,b,a,c);

  for (int i = 0; 0 < 10; i++)
    {
      buzzer_set_period(playNotes(i));
      __delay_cycles(500000);
      buzzer_set_period(0);
      __delay_cycles(250000)
    }
  buzzer_set_period(0);
}
