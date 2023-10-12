#pragma once
#include "buildings.h"
#include "bus.h"
#include "playground.h"
#include "clubs.h"
#include<cstring>
class school
{
    std::string correspondent;
    std::string principle;
    double networth;
    std::string address;
    int year;
    int num_stu;
    int num_teach;
    buildings b;
    bus bu;
    playground p;
    club c;
    std::string name;
public:
    void setdata();
    void getdata();
};
