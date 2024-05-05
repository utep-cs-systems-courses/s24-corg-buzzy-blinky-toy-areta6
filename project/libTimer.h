#ifndef libTimer_included
#define libTimer_included

void configureClocks();
void enableWDTinterrupts();
void timerAUpmode();

unsigned char gert_sr();
void set_sr(), or_sr(), and_sr();

#endif //made this since bug kept comming up in buzzer where libTimer.h was not reachable
