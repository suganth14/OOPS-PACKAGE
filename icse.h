#include "school.h"
class icse:public school
{
    float student_fees;
    int max_std;
    int no_passed;
    std::striing uniform_pattern;
    std:stringchar medium;
public:
    void seticse();
    void geticse();
    friend int ret_name(icse i,char name[20]);
};
