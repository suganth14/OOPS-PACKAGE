#include "school.h"
class state_board:public school
{
    float student_fees;
    int max_std;
    int no_passed;
    std::string uniform_pattern;
    std::string medium;
public:
    void setstate();
    void getstate();
    friend int ret_name(state_board s,std::string name);
};
