ifndef TIME_H
#define TIME_H
#include <vector>
#include <string>
using namespace std;
class Time {

protected:
    int hour, min;
public:
    Time();
    Time(string);
    bool isAfter(Time);
    void setTime(int,int);
    string toString();
};

#endif // TIME_H
