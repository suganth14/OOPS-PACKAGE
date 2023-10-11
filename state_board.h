#include "school.h"
class state_board:public school
{
    float student_fees;
    int max_std;
    int no_passed;
    char uniform_pattern[15];
    char medium[15];
public:
    void setstate();
    void getstate();
    friend int ret_name(state_board s,char name[20]);
};
