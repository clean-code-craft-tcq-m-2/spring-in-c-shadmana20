//#include "stats.h"
typedef void (*alerter_funcptr)();
void emailAlerter(void);
void ledAlerter(void);
//void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
extern int emailAlertCallCount;
extern int ledAlertCallCount;
