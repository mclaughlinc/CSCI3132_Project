#ifndef SCHEDULE_H
#define SCHEDULE_H
#include "classroom.h"
class Schedule {
protected:
    vector<ClassRoom> roomList;
public:
    Schedule();
    void insertClassRoom(ClassRoom);
    string toString();
};

#endif // SCHEDULE_H
