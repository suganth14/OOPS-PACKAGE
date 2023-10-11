#include "icse.h"
#include<iostream>
using namespace std;
void icse::seticse()
{
    setdata();
    while(true)
    {
        cout<<"\nAVERAGE FEES FOR A STUDENT:";
        cin>>student_fees;
        if(student_fees>0)
        {
            cout<<"\nINVALIID NUMBER:";
            break;
        }

        cout<<"\nTILL WHICH STANDARD DOES THE SCHOOL OFFER:";
        cin>>max_std;
        if(max_std>0&&max_std<13)
        {
            cout<<"\nINVALID NUMBER:";
        }
    }
    while(true)
    {
        if(max_std==12)
        {
            cout<<"\nNUMBER OF PASSED OUT BATCHES:";
            cin>>no_passed;
            if(no_passed>0)
            {
                break;
            }
            cout<<"\nINVALID NUMBER:";
        }
    }
    cout<<"\nENTER UNIFORM PATTERN OF STUDENTS:";
    cin>>uniform_pattern;
    cout<<"\nMEDIUM:";
    cin>>medium;
}
void icse::geticse()
{
    getdata();
    cout<<"\nAVERAGE FEES IN SCHOOL:"<<student_fees;
    cout<<"\nTHE SCHOOL OFFERS TILL:"<<max_std<<"th STANDARD";
    cout<<"\nNUMBER OF PASSED OUT BATCHES:"<<no_passed;
    cout<<"\nUNIFORM PATTERN OF STUDENTS:"<<uniform_pattern;
    cout<<"\nMEDIUM:"<<medium;
}
int ret_name(icse i,char name[20])
{
    if(strcmp(i.name,name)==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
