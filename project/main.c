#include <msp430.h>
#include "libtimer.h"
#include "buzzer.h"
#include "switches.h"

void main()
{
  configureClocks(); //activating from timerlib
  switch_init();
  led_init();
  buzzer_init();
  or_sr(0x18);
}
