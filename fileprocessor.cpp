#include "fileprocessor.h"

FileProcessor::FileProcessor(string filename){
    ifstream fin;
    fin.open(filename);
}

FileProcessor::parse(vector<Lecture> list) {
    string input, token = "";
    int field = 1;

    if (!fin.good())
        return;

    else {
        //fields of a lecture
        string courseCode;
        Time startTime, endTime;

        //parsing file, line by line
        while (!fin.eof()) {

            //pull first line
            getline(fin,input);

            //pulling values from the line
            for (int i = input.begin(); i < input.end(); i++) {

                //found complete field
                if (input.at(i)==' ' || input.at(i)=='\n') {

                    if (field==1)
                        courseCode=token;
                    else if (field==2)
                        startTime(token);
                    else
                        endTime(token);

                    field++;
                }

                //else not done yet
                else {
                    token+=input.at(i);
                }
            }
            //end of line, create lecture, add to list
            Lecture lec(courseCode, &startTime, &endTime);
            list.push_back(&lec);
        }
        produceSchedule(list);
    }
}
