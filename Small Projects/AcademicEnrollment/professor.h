#pragma once

#include "course.h"
#include "person.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Professor : public Person
{
private:
    std::string m_department;
    std::vector<Course *> coursesTaught;

public:
    Professor(int age, const std::string &name, const std::string &department);
    ~Professor();

    void displayInfo();
    int getProfessorById();

    void addCourse(Course *course);
    void removeCourse(Course *course);
};

// Implementation

Professor::Professor(int age, const std::string &name, const std::string &department)
    : Person(age, name), m_department(department)
{
}

Professor::~Professor() {}

void Professor::displayInfo()
{
    std::cout << "Professor: " << m_name
              << ", Age: " << m_age
              << ", Department: " << m_department << std::endl;

    std::cout << "Courses Taught:" << std::endl;
    if (coursesTaught.empty())
    {
        std::cout << "  (None)" << std::endl;
    }
    else
    {
        for (auto *course : coursesTaught)
        {
            if (course)
            {
                course->displayInfo();
            }
        }
    }
}

void Professor::addCourse(Course *course)
{
    if (course && std::find(coursesTaught.begin(), coursesTaught.end(), course) == coursesTaught.end())
    {
        coursesTaught.push_back(course);
    }
}

void Professor::removeCourse(Course *course)
{
    if (!course)
        return;
    auto it = std::find(coursesTaught.begin(), coursesTaught.end(), course);
    if (it != coursesTaught.end())
    {
        coursesTaught.erase(it);
    }
}
