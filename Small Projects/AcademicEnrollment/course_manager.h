#pragma once
#include"manager.h"
#include"course.h"

class CourseManager:public Manager<CourseManager>
{
private:
    /* data */
public:
    CourseManager(/* args */);
    ~CourseManager();
};

CourseManager::CourseManager(/* args */)
{
}

CourseManager::~CourseManager()
{
}
