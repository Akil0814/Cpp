#pragma once
#include"manager.h"
#include"course.h"
#include <iostream>
#include <string>
#include <limits>

class CourseManager : public Manager<CourseManager>
{
private:
    std::vector<Course> course_list;

public:
    CourseManager() = default;
    ~CourseManager() = default;

    void showAll();
    void addCourse();
    void removeCourse();
    Course* getCourseById(int courseId);
    void showStudentsInCourse();
};

void CourseManager::addCourse()
{
    std::string code, title;
    int credits, maxCap;
    std::cout << "Enter course code: ";
    std::getline(std::cin, code);
    std::cout << "Enter course title: ";
    std::getline(std::cin, title);
    std::cout << "Enter credits: ";
    std::cin >> credits;
    std::cout << "Enter max capacity: ";
    std::cin >> maxCap;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    course_list.emplace_back(code, title, credits, maxCap);
    std::cout << "Course added successfully." << std::endl;
}

void CourseManager::removeCourse()
{
    showAll();
    if (course_list.empty()) return;
    std::cout << "Enter number of course to remove: ";
    size_t index;
    std::cin >> index;
    if (index == 0 || index > course_list.size()) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    course_list.erase(course_list.begin() + (index - 1));
    std::cout << "Course removed." << std::endl;
}

Course* CourseManager::getCourseById(int courseId)
{
    for (auto& course : course_list) {
        if (course.getCourseCode() == courseId)
        {
            return &course;
        }
    }
    return nullptr;
}

void CourseManager::showStudentsInCourse()
{
    showAll();
    if (course_list.empty()) return;
    std::cout << "Enter number of course to view students: ";
    size_t index;
    std::cin >> index;
    if (index == 0 || index > course_list.size()) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    Course& course = course_list[index - 1];
    course.displayInfo();
}
