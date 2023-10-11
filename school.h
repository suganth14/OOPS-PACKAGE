#pragma once
#include "buildings.h"
#include "bus.h"
#include "playground.h"
#include "clubs.h"
#include<cstring>
class school
{
    char correspondent[20];
    char principle[20];
    double networth;
    char address[70];
    int year;
    int num_stu;
    int num_teach;
    buildings b;
    bus bu;
    playground p;
    club c;
    char name[50];
public:
    void setdata();
    void getdata();
};
