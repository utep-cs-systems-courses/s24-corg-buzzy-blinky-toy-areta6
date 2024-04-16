#include <msp430.h>
#include "led.h"
#include "switches.h"

//using demo 10 as a base
void led_init()
{
  P1DIR |= LEDS;
  switch_state_changed =1;
  led_update();
}

void led_update()
{
  
}
