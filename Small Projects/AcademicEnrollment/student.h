#pragma once

#include "course.h"
#include "person.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Student : public Person
{
public:
    Student(int age, const std::string &name, int studentID, double gpa);
    ~Student();

    void displayInfo() override;

    void addCourse(Course* course);
    void removeCourse(Course* course);

    const std::vector<Course*>& getCourses() const { return coursesEnrolled; }

private:
    static int totalStudentCount;

    std::vector<Course*> coursesEnrolled;
    int m_studentID;
    double m_gpa;
};

int Student::totalStudentCount = 0;

Student::Student(int age, const std::string &name, int studentID, double gpa)
    : Person(age, name), m_studentID(studentID), m_gpa(gpa)
{
    ++totalStudentCount;
}

Student::~Student() {}

void Student::displayInfo()
{
    std::cout << "Student: " << m_name
              << ", Age: " << m_age
              << ", ID: " << m_studentID
              << ", GPA: " << m_gpa << std::endl;

    std::cout << "Enrolled Courses:" << std::endl;
    if (coursesEnrolled.empty()) {
        std::cout << "  (None)" << std::endl;
    } else {
        for (auto* course : coursesEnrolled) {
            if (course) {
                course->displayInfo();
            }
        }
    }
}

void Student::addCourse(Course* course)
{
    if (course && std::find(coursesEnrolled.begin(), coursesEnrolled.end(), course) == coursesEnrolled.end()) {
        coursesEnrolled.push_back(course);
    }
}

void Student::removeCourse(Course* course)
{
    if (!course) return;
    auto it = std::find(coursesEnrolled.begin(), coursesEnrolled.end(), course);
    if (it != coursesEnrolled.end()) {
        coursesEnrolled.erase(it);
    }
}
