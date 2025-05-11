#pragma once
#include"manager.h"
#include "student.h"

class StudentManager:public Manager<StudentManager>
{
private:
    /* data */
public:
    StudentManager(/* args */);
    ~StudentManager();
};

StudentManager::StudentManager(/* args */)
{
}

StudentManager::~StudentManager()
{
}
