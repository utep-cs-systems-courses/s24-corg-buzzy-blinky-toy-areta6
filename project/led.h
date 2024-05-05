#ifndef led_included
#define led_included

#define LED_RED BIT0
#define LED_GREEN BIT6
#define LEDS (BIT0 | BIT6)

void led_init();
void led_update();
void led_green_on();
void led_red_on();
void leds_off();
void led_alternate();

//boolean flags
extern unsigned char leds_changed, green_led_state, red_led_state;


#endif
