#pragma once

#include "student.h"
#include "professor.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Course
{
public:
    Course(const std::string& init_courseCode,
           const std::string& init_title,
           int init_credits,
           int init_maxCapacity);
    ~Course();

    int getCurrentEnrollment() const;
    bool isFull() const;
    void displayInfo() const;
    int getCourseCode();

    void addStudent(Student* student);
    void removeStudent(Student* student);

private:
    std::string courseCode;
    std::string title;
    int credits;
    int maxCapacity;
    std::vector<Student*> enrolledStudents;
};

// Implementation
Course::Course(const std::string& init_courseCode,
               const std::string& init_title,
               int init_credits,
               int init_maxCapacity)
    : courseCode(init_courseCode)
    , title(init_title)
    , credits(init_credits)
    , maxCapacity(init_maxCapacity)
{
}

Course::~Course() {}

int Course::getCurrentEnrollment() const
{
    return static_cast<int>(enrolledStudents.size());
}

bool Course::isFull() const
{
    return getCurrentEnrollment() >= maxCapacity;
}

void Course::displayInfo() const
{
    std::cout << "Course: " << courseCode
              << " - " << title
              << " (" << credits << " credits)"
              << ", Enrollment: " << getCurrentEnrollment()
              << "/" << maxCapacity << std::endl;

    if (enrolledStudents.empty()) {
        std::cout << "  No students enrolled." << std::endl;
    } else {
        std::cout << "  Enrolled students:" << std::endl;
        for (auto* student : enrolledStudents) {
            if (student) {
                std::cout << "    - ";
                student->displayInfo(); // assumes Student::displayInfo() prints on a new line or same
            }
        }
    }
}

void Course::addStudent(Student* student)
{
    if (student && !isFull()
        && std::find(enrolledStudents.begin(), enrolledStudents.end(), student) == enrolledStudents.end())
    {
        enrolledStudents.push_back(student);
    }
}

void Course::removeStudent(Student* student)
{
    if (!student)
        return;

    auto it = std::find(enrolledStudents.begin(), enrolledStudents.end(), student);
    if (it != enrolledStudents.end()) {
        enrolledStudents.erase(it);
    }
}
