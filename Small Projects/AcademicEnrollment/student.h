#pragma once
#include "course.h"
#include "person.h"
#include <iostream>
#include <string>
#include <vector>

class Student : public Person
{
public:
    Student(int age, const std::string &name, int studentID, double gpa);
    ~Student();

    void displayInfo() final;

private:
    static int totalStudentCount;

    std::vector<Course *> coursesEnrolled;
    int m_studentID;
    double m_gpa;
};

int Student::totalStudentCount = 0;

Student::Student(int age, const std::string &name, int studentID, double gpa)
    : Person(age, name), m_studentID(studentID), m_gpa(gpa)
{
    ++totalStudentCount;
}

Student::~Student(){}

void Student::displayInfo()
{
    std::cout << "Student: " << m_name
              << ", Age: " << m_age
              << ", ID: " << m_studentID
              << ", GPA: " << m_gpa
              <<std::endl
              <<"Course enroll:"
              << std::endl;
    if(!coursesEnrolled.empty())
    {
        for(int i=0; i<coursesEnrolled.size();i++)
        {
            std::cout<<i<<":"<<std::endl;
        }
    }
}

