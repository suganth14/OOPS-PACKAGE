#include "clubs.h"
#include<iostream>
using namespace std;
void club::setclub()
{
    while(true)
    {
        cout<<"\nENTER THE NUMBER OF STUDENT CLUBS IN SCHOOL(enter 0 if there is no club):";
        cin>>num;
        if(num>=0)
        {
            break;
        }
        cout<<"\nINVALID NUMBER:";
    }
    if(num>0)
    {
        cout<<"\nDOES THE SCHOOL HAVE ENVIRONMENT CLUB(y/n):";
        cin>>environment_club;
    }
}
void club::getclub() const
{
    cout<<"\nNUMBER OF CLUBS IN SCHOOL:"<<num;
    if(num>0)
    {
        if(environment_club=='y'||environment_club=='Y')
        {
            cout<<"\nTHE SCHOOL HAS A ENVIRONMENT CLUD AS INSISTED BY GOVERNMENT:";
        }
        else
        {
            cout<<"\nTHE SCHOOL DOESN'T HAVE A ENVIRONMENT CLUB:";
        }
    }
}
