#ifndef CLASSROOM_H
#define CLASSROOM_H
#include "lecture.h"


using namespace std;

class ClassRoom {

protected:
vector<Lecture> lectureList;
string roomName;

public:
    ClassRoom(string);
    void setRoomName(string);
    string getRoomName();
    void insertLecture(Lecture);
    string toString();
    bool isEmpty();
    Lecture lastLecture();

};

#endif // CLASSROOM_H
