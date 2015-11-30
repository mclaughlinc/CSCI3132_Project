#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H
#include <vector>
#include "lecture.h"
using namespace std;
class FileProcessor
{
public:
    FileProcessor(string);
    void parse(vector<Lecture>);
};

#endif // FILEPROCESSOR_H
