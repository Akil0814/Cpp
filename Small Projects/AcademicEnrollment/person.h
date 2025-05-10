#include <string>

class Person
{
private:
    std::string m_name;
    int m_age;

public:
    Person(int age,std::string name)
    {
        age = m_age;
        name = m_name;
    }
    ~Person() {}

    virtual void displayInfo()=0;
};
