#include "classroom.h"

ClassRoom::ClassRoom(string s) {
    roomName = s;
}

void ClassRoom::setRoomName(string s) {
    roomName = s;
}

string ClassRoom::getRoomName() {
    return roomName;
}

void ClassRoom::insertLecture(Lecture l) {
    lectureList.push_back(l);
}

bool ClassRoom::isEmpty() {
    return lectureList.size() == 0;
}

Lecture ClassRoom::lastLecture() {
    return lectureList.back();
}

string ClassRoom::toString() {
    string str = "";
    for (int i = 0; i < lectureList.size(); i++)
        str += lectureList.at(i).toString() + "\n";

    return str;
}
