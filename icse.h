#include "school.h"
class icse:public school
{
    float student_fees;
    int max_std;
    int no_passed;
    char uniform_pattern[15];
    char medium[15];
public:
    void seticse();
    void geticse();
    friend int ret_name(icse i,char name[20]);
};
