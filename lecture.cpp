#include "lecture.h"

Lecture::Lecture(string c, Time s, Time e) {
    code = c;
    startT = s;
    endT = e;
}

void Lecture::setCode(std::string s) {
    code = s;
}

string Lecture::getCode() {
    return code;
}

void Lecture::setStart(Time s) {
    startT = s;
}

Time Lecture::getStart() {
    return startT;
}

void Lecture::setEnd(Time e) {
    endT = e;
}

Time Lecture::getEnd() {
    return endT;
}

string Lecture::toString() {
    return  code + " " + startT.toString() + " " + endT.toString();
}
