#include "school.h"
class cbse:public school
{
    float student_fees;
    int max_std;
    int no_passed;
    char uniform_pattern[15];
    char medium[15];
public:
    void setcbse();
    void getcbse();
    friend int ret_name(cbse c,char name[20]);
};
