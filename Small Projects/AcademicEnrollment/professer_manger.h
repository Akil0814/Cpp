#pragma once
#include"manager.h"
#include"process.h"

class ProfesserManger:public Manager<ProfesserManger>
{
private:
    /* data */
public:
    ProfesserManger(/* args */);
    ~ProfesserManger();
};

ProfesserManger::ProfesserManger(/* args */)
{
}

ProfesserManger::~ProfesserManger()
{
}
