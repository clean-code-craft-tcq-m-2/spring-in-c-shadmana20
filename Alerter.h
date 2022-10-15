#include "stats.h"
typedef void (*alerter_funcptr)();
void emailAlerter(void);
void ledAlerter(void);
alerter_funcptr alerters[] = {emailAlerter, ledAlerter};
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
