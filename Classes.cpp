/*Author: Hamza Awan, Conor McLaughlin
*Purpose: Project 3132
*Date: 28/11/2015
*Class Time
*/

#include<iostream>
#include<string>
#include<vector>


using namespace std;

class Time {

protected:
	int hour, min;

public:
	Time(string t) {
		int hour, min;
		string h, m;
		h = t.substr(0, 2);
		hour = stoi(h);
		m = t.substr(3, 2);
		min = stoi(m);
	}
	bool isEqual(Time t) {
		if (this->hour && this->min == t.hour && t.min) {
			return true;
		}

	}
	bool isAfter(Time t) {
		if (this->hour > t.hour)
			return true;
		if (this->hour == t.hour && this->min > t.min)
			return true;
	}
	void setTime(int h, int m) {
		hour = h;
		min = m;
	}
	string toString() {
		char* h, *m;
		itoa(hour, h, 10);
		itoa(min, m, 10);

		string str = " " + string(h) + ":" + string(m) + " ";
		return str;
	}
};
//class Lecture: contains start and end Time values, also contains lecture code

class Lecture {

protected:
	Time* startT, *endT;
	string code;

public:
	 Lecture(string c, Time* s, Time* e) {
		startT = s;
		endT = e;
		code = c;
	}
	void setStart(Time* s) {
		startT = s;
	}
	void setEnd(Time* e) {
		endT = e;
	}
	void setCode(string c) {
		code = c;
	}
	Time* getStart() {
		return startT;
	}
	Time* getEnd() {
		return endT;
	}
	string getCode() {
		return code;
	}
	string toString() {
		return  "Course code: " + code + "\nStart time: " + startT->toString + "\nEnd time: " + endT->toString;
	}
};
//class classRoom, contains list of lectures.

class ClassRoom {

protected:
	vector<Lecture> lectureList;
	string roomName;

public:
	ClassRoom(string n) {
		roomName = n;
	}
	void setRoomName(string n) {
		roomName = n;
	}
	string getRoomName() {
		return roomName;
	}
	void insertLecture(Lecture lecture) {
		lectureList.push_back(lecture);
	}
	string toString() {
		string str = " ";
		for (int i = 0; i < lectureList.size; i++)
			str += lectureList.at(i).toString + " -> ";
		
		return str;
	}
};
//class Schedule, contains list of classrooms, methods to add and print list

class Schedule {

protected:
	vector<ClassRoom> roomList;

public:
	Schedule(){}

	void insertClassRoom(ClassRoom room) {	
		roomList.push_back(room);
	}
	string toString() {
		string str = " ";
		for (int i = 0; i < roomList.size; i++)
			str += roomList.at(i).toString + " -> ";

		return str;
	}
};
