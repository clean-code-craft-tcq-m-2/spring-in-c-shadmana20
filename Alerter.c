#include "Alerter.h"
alerter_funcptr alerters[] = {emailAlerter, ledAlerter};
void emailAlerter(void)
{
    int emailAlertCallCount = 0;

}
void ledAlerter(void)
{
    int ledAlertCallCount = 0;
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
