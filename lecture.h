#ifndef LECTURE_H
#define LECTURE_H
#include "time.h"
using namespace std;

class Lecture
{
protected:
    Time startT, endT;
    string code;
public:
    Lecture(string, Time, Time);
    void setStart(Time);
    void setEnd(Time);
    void setCode(string);
    Time getStart();
    Time getEnd();
    string getCode();
    string toString();
};

#endif // LECTURE_H
