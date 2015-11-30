#include "schedule.h"
using namespace std;

Schedule::Schedule(){}

void Schedule::insertClassRoom(ClassRoom room) {
     roomList.push_back(room);
}

string Schedule::toString() {
    string str = "";
    for (int i = 0; i < roomList.size(); i++)
        str += roomList.at(i).toString() + "\n";

    return str;
}
