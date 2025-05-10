#pragma once

#include <iostream>
#include <string>
#include <vector>

class Course
{

public:
    Course(std::string init_courseCode,std::string init_title,int init_credits,int init_maxCapacity);
    ~Course();

    int getCurrentEnrollment();
    bool isFull();
    void displayCourseInfo();
    //addStudent(Student* student);
    //removeStudent(Student* student);
    //Course& operator+=(Student& student);

private:
    std::string courseCode;
    std::string title;
    int credits;
    int maxCapacity;
    //std::vector<Student> enrolledStudents;
};

Course::Course(std::string init_courseCode,std::string init_title,int init_credits,int init_maxCapacity)
    :courseCode(init_courseCode),title(init_title),credits(init_credits),maxCapacity(init_maxCapacity)
{}
