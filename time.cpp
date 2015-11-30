#include "time.h"
using namespace std;

Time::Time(){}

Time::Time(string t) {
    int hour, min;
    string h="", m="";
    h = t.substr(0, 2);
    m = t.substr(3, 2);
    stringstream convert(h);
    convert >> hour;
    stringstream convertm(m);
    convertm >> min;
    delete[] &convert;
    delete[] &convertm;
}

bool Time::isAfter(Time t) {
    if (this->hour > t.hour)
        return true;
    if (this->hour == t.hour && this->min > t.min)
        return true;
    return false;
}

void Time::setTime(int h, int m) {
    hour = h;
    min = m;
}

string Time::toString() {
    string h, m;
    stringstream convert;
    convert << hour;
    h = convert.str();
    convert.flush();
    convert << min;
    m = convert.str();

    string str = " " + h + ":" + m + " ";
    return str;
}
