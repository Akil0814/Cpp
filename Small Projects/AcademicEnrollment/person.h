#pragma once
#include <string>

class Person
{
public:
    Person(int age, const std::string &name) : m_age(age), m_name(name) {}
    ~Person() = default;

    virtual void displayInfo() = 0;

protected:
    std::string m_name;
    int m_age;
};
