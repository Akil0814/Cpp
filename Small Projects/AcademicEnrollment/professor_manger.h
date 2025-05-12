#pragma once
#include"manager.h"
#include"professor.h"
#include <iostream>
#include <string>
#include <vector>

class ProfessorManger:public Manager<ProfessorManger>
{
private:
    std::vector<Professor> porfesser_list;

public:
    ProfesserManger();
    ~ProfesserManger();

    void showAll();
    void AddProfesser();
    void RemoveProfesser();
    bool assignCourse();
    bool unassignCourse();
    void showProfessorCourses();
};

#pragma once

#include "manager.h"
#include "professor.h"
#include "course_manager.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

class ProfesserManger : public Manager<ProfesserManger>
{
private:
    std::vector<Professor> professer_list;

public:
    ProfesserManger() = default;
    ~ProfesserManger() = default;

    void showAll();
    void AddProfesser();
    void RemoveProfesser();
    bool assignCourse();
    bool unassignCourse();
    void showProfessorCourses();
};

void ProfesserManger::showAll()
{
    if (professer_list.empty()) {
        std::cout << "No professors available." << std::endl;
        return;
    }
    std::cout << "Professors:" << std::endl;
    for (size_t i = 0; i < professer_list.size(); ++i) {
        std::cout << i + 1 << ". ";
        professer_list[i].displayInfo();
    }
}

void ProfesserManger::AddProfesser()
{
    int age;
    std::string name, dept;
    std::cout << "Enter Professor age: ";
    std::cin >> age;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter Professor name: ";
    std::getline(std::cin, name);
    std::cout << "Enter Department: ";
    std::getline(std::cin, dept);

    professer_list.emplace_back(age, name, dept);
    std::cout << "Professor added successfully." << std::endl;
}

void ProfesserManger::RemoveProfesser()
{
    showAll();
    if (professer_list.empty()) return;
    std::cout << "Enter number of Professor to remove: ";
    size_t index;
    std::cin >> index;
    if (index == 0 || index > professer_list.size()) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    professer_list.erase(professer_list.begin() + (index - 1));
    std::cout << "Professor removed." << std::endl;
}

bool ProfesserManger::assignCourse()
{
    showAll();
    if (professer_list.empty()) return false;
    std::cout << "Select Professor number to assign course: ";
    size_t pidx;
    std::cin >> pidx;
    if (pidx == 0 || pidx > professer_list.size()) return false;

    int cid;
    std::cout << "Enter Course ID: ";
    std::cin >> cid;
    Course* course = CourseManager::instance()->getCourseById(cid);
    if (!course) {
        std::cout << "Course not found." << std::endl;
        return false;
    }

    professer_list[pidx - 1].addCourse(course);
    std::cout << "Course assigned to Professor." << std::endl;
    return true;
}

bool ProfesserManger::unassignCourse()
{
    showProfessorCourses();
    std::cout << "Select Professor number to unassign course from: ";
    size_t pidx;
    std::cin >> pidx;
    if (pidx == 0 || pidx > professer_list.size()) return false;

    int cid;
    std::cout << "Enter Course ID to unassign: ";
    std::cin >> cid;
    Course* course = CourseManager::instance()->getCourseById(cid);
    if (!course) {
        std::cout << "Course not found." << std::endl;
        return false;
    }

    professer_list[pidx - 1].removeCourse(course);
    std::cout << "Course unassigned from Professor." << std::endl;
    return true;
}

void ProfesserManger::showProfessorCourses()
{
    showAll();
    if (professer_list.empty()) return;
    std::cout << "Select Professor number to view courses: ";
    size_t pidx;
    std::cin >> pidx;
    if (pidx == 0 || pidx > professer_list.size()) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    std::cout << "Courses taught by Professor " << pidx << ":" << std::endl;
    professer_list[pidx - 1].displayInfo();
}


