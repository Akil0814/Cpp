#pragma once
#include "manager.h"
#include "student_manager.h"
#include "course_manager.h"
#include "professer_manger.h"
#include <iostream>
#include <string>
#include <limits>

class EnrollmentManager : public Manager<EnrollmentManager>
{
    enum class UserType
    {
        Visitor,
        Student,
        Professor,
        Root
    };

public:
    EnrollmentManager();
    ~EnrollmentManager();

    int run(int argc, char **argv);

private:
    void show_main_menu();
    void show_student_menu();
    void show_professor_menu();
    void show_root_menu();

    void handle_main_menu();
    void handle_student_menu();
    void handle_professor_menu();
    void handle_root_menu();

    bool identity_verification();

private:
    UserType usertype = UserType::Visitor;
    std::string rootUserPassword = "Akil0814";
    bool is_end = false;

    ProfesserManger *professer_manager = nullptr;
    StudentManager *student_manager = nullptr;
    CourseManager *course_manager = nullptr;
};

int EnrollmentManager::run(int argc, char **argv)
{
    while (!is_end)
    {
        show_main_menu();
        int choice;
        std::cout << "Enter your identity (1=Student, 2=Professor, 3=Root, 4=Show All Courses, 5=Exit): ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            usertype = UserType::Student;
            handle_student_menu();
            break;
        case 2:
            usertype = UserType::Professor;
            handle_professor_menu();
            break;
        case 3:
            usertype = UserType::Root;
            if (identity_verification())
                handle_root_menu();
            break;
        case 4:
            course_manager->showAll(); // 你自己实现的展示函数
            break;
        case 5:
            std::cout << "Exiting system. Goodbye!\n";
            is_end = true;
            break;
        default:
            std::cout << "Invalid choice. Try again.\n";
            break;
        }
    }
    return 0;
}

void EnrollmentManager::handle_student_menu()
{
    while (true)
    {
        show_student_menu();
        int choice;
        std::cout << "Enter your option: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            student_manager->showMyCourses(); // 你要自己实现
            break;
        case 2:
            course_manager->showAll();
            break;
        case 3:
            student_manager->enrollCourse(); // 用 getStudentId 再选课
            break;
        case 4:
            student_manager->dropCourse(); // 自己实现
            break;
        case 6:
            return; // Back
        default:
            std::cout << "Invalid option.\n";
            break;
        }
    }
}

void EnrollmentManager::handle_professor_menu()
{
    while (true)
    {
        show_professor_menu();
        int choice;
        std::cout << "Enter your option: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            professer_manager->assignCourse(); // 教师分配课程
            break;
        case 2:
            professer_manager->unassignCourse(); // 教师解除课程
            break;
        case 3:
            course_manager->showStudentsInCourse(); // 某课程的所有学生
            break;
        case 4:
            professer_manager->showMyCourses(); // 展示当前教师的课程
            break;
        case 5:
            return;
        default:
            std::cout << "Invalid option.\n";
            break;
        }
    }
}

void EnrollmentManager::handle_root_menu()
{
    while (true)
    {
        show_root_menu();
        int choice;
        std::cout << "Enter your option: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            student_manager->addStudent();
            break;
        case 2:
            professer_manager->addTeacher();
            break;
        case 3:
            course_manager->addCourse();
            break;
        case 4:
            student_manager->removeStudent();
            break;
        case 5:
            professer_manager->removeTeacher();
            break;
        case 6:
            course_manager->removeCourse();
            break;
        case 7:
            student_manager->showAll();
            break;
        case 8:
            professer_manager->showAll();
            break;
        case 9:
            return;
        default:
            std::cout << "Invalid option.\n";
            break;
        }
    }
}

bool EnrollmentManager::identity_verification() {
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (usertype == UserType::Student) {
        int id;
        std::cout << "Enter Student ID: ";
        std::cin >> id;
        if (student_manager->getStudentById(id)) {
            return true;
        }
        std::cout << "Invalid Student ID.\n";
    }
    else if (usertype == UserType::Professor) {
        int id;
        std::cout << "Enter Professor ID: ";
        std::cin >> id;
        if (professer_manager->getProfessorById(id)) {
            return true;
        }
        std::cout << "Invalid Professor ID.\n";
    }
    else if (usertype == UserType::Root) {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::string tmp;
        std::cout << "Enter password: ";
        std::getline(std::cin, tmp);
        if (tmp == rootUserPassword) {
            return true;
        }
        std::cout << "Wrong password.\n";
    }

    usertype = UserType::Visitor;
    return false;
}

void EnrollmentManager::show_main_menu() {
    std::cout << "\n====== Academic Management System ======\n";
    std::cout << "1. Student\n";
    std::cout << "2. Professor\n";
    std::cout << "3. Root\n";
    std::cout << "4. Show All Courses\n";
    std::cout << "5. Exit\n";
    std::cout << "=======================================\n";
}

void EnrollmentManager::show_student_menu() {
    std::cout << "\n====== Student Menu ======\n";
    std::cout << "1. Show My Courses\n";
    std::cout << "2. Show All Courses\n";
    std::cout << "3. Enroll in Course\n";
    std::cout << "4. Drop Course\n";
    std::cout << "5. Back\n";
    std::cout << "==========================\n";
}

void EnrollmentManager::show_professor_menu() {
    std::cout << "\n====== Professor Menu ======\n";
    std::cout << "1. Show My Courses\n";
    std::cout << "2. Assign Course\n";
    std::cout << "3. Unassign Course\n";
    std::cout << "4. Show Students in Course\n";
    std::cout << "5. Back\n";
    std::cout << "============================\n";
}

void EnrollmentManager::show_root_menu() {
    std::cout << "\n====== Root Menu ======\n";
    std::cout << "1. Add Student\n";
    std::cout << "2. Add Teacher\n";
    std::cout << "3. Add Course\n";
    std::cout << "4. Remove Student\n";
    std::cout << "5. Remove Teacher\n";
    std::cout << "6. Remove Course\n";
    std::cout << "7. Show All Students\n";
    std::cout << "8. Show All Professors\n";
    std::cout << "9. Back\n";
    std::cout << "=======================\n";
}
