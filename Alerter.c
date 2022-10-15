#include "Alerter.h"
#include "stats.h"
alerter_funcptr alerters[] = {emailAlerter, ledAlerter};
void emailAlerter(void)
{
   emailAlertCallCount = 0;

}
void ledAlerter(void)
{
    ledAlertCallCount = 0;
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{

if(computedStats.max > maxThreshold){
emailAlerter();
emailAlertCallCount++;
ledAlerter();
ledAlertCallCount++;
}
    
}
