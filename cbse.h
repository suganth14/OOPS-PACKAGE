#include "school.h"
# include <string>
class cbse:public school
{
    float student_fees;
    int max_std;
    int no_passed;
    std::string uniform_pattern;
    std:string medium;
public:
    void setcbse();
    void getcbse();
    friend int ret_name(cbse c,char name[20]);
};
