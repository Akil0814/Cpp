// StudentManager.h
#pragma once

#include "manager.h"
#include "student.h"
#include "course_manager.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

class StudentManager : public Manager<StudentManager>
{
private:
    std::vector<Student> student_list;

public:
    StudentManager() = default;
    ~StudentManager() = default;

    void showAll();
    void addStudent();
    void removeStudent();
    Student* getStudentById(int studentID);

    void showStudentCourses();
    bool enrollCourse();
    bool dropCourse();
};

// StudentManager.cpp
#include "StudentManager.h"

void StudentManager::showAll()
{
    if (student_list.empty()) {
        std::cout << "No students available." << std::endl;
        return;
    }
    std::cout << "Students:" << std::endl;
    for (size_t i = 0; i < student_list.size(); ++i) {
        std::cout << i + 1 << ". ID=" << student_list[i].getStudentID()
                  << ", Name=" << student_list[i].getName() << std::endl;
    }
}

void StudentManager::addStudent()
{
    int age, id;
    double gpa;
    std::string name;

    std::cout << "Enter student age: ";
    std::cin >> age;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter student name: ";
    std::getline(std::cin, name);
    std::cout << "Enter student ID: ";
    std::cin >> id;
    std::cout << "Enter student GPA: ";
    std::cin >> gpa;

    student_list.emplace_back(age, name, id, gpa);
    std::cout << "Student added successfully." << std::endl;
}

void StudentManager::removeStudent()
{
    showAll();
    if (student_list.empty()) return;

    std::cout << "Enter number of student to remove: ";
    size_t index;
    std::cin >> index;
    if (index == 0 || index > student_list.size()) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    student_list.erase(student_list.begin() + (index - 1));
    std::cout << "Student removed." << std::endl;
}

Student* StudentManager::getStudentById(int studentID)
{
    for (auto& student : student_list) {
        if (student.getStudentID() == studentID) {
            return &student;
        }
    }
    return nullptr;
}

void StudentManager::showStudentCourses()
{
    showAll();
    if (student_list.empty()) return;

    std::cout << "Enter student ID to view courses: ";
    int id;
    std::cin >> id;
    Student* student = getStudentById(id);
    if (!student) {
        std::cout << "Student not found." << std::endl;
        return;
    }
    student->displayInfo(); // Student::displayInfo shows courses
}

bool StudentManager::enrollCourse()
{
    showAll();
    if (student_list.empty()) return false;

    std::cout << "Enter student ID to enroll: ";
    int sid;
    std::cin >> sid;
    Student* student = getStudentById(sid);
    if (!student) {
        std::cout << "Student not found." << std::endl;
        return false;
    }

    std::cout << "Enter course ID to enroll in: ";
    int cid;
    std::cin >> cid;
    Course* course = CourseManager::instance()->getCourseById(cid);
    if (!course) {
        std::cout << "Course not found." << std::endl;
        return false;
    }

    if (course->isFull()) {
        std::cout << "Course is full." << std::endl;
        return false;
    }

    student->addCourse(course);
    course->addStudent(student);
    std::cout << "Enrollment successful." << std::endl;
    return true;
}

bool StudentManager::dropCourse()
{
    showStudentCourses();
    std::cout << "Enter student ID to drop a course: ";
    int sid;
    std::cin >> sid;
    Student* student = getStudentById(sid);
    if (!student) {
        std::cout << "Student not found." << std::endl;
        return false;
    }

    std::cout << "Enter course ID to drop: ";
    int cid;
    std::cin >> cid;
    Course* course = CourseManager::instance()->getCourseById(cid);
    if (!course) {
        std::cout << "Course not found." << std::endl;
        return false;
    }

    student->removeCourse(course);
    course->removeStudent(student);
    std::cout << "Course dropped successfully." << std::endl;
    return true;
}
