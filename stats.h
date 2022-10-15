
struct Stats compute_statistics(const float* numberset, int setlength);
struct Stats {
    float average;
    float min;
    float max;
};

struct Stats compute_statistics(const float* numberset, int setlength);
float GetMax(const float* numberset,int setlength);
float GetAvg(const float* numberset,int setlength);
float GetMin(const float* numberset,int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
