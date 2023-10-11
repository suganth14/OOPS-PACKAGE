#include<iostream>
#include "buildings.h"
using namespace std;
void buildings::setbuildings()
{
    while(true)
    {
        cout<<"\nENTER NUMBER OF BUILDING IN SCHOOL:";
        cin>>num;
        if(num>0)
        {
            break;
        }
        cout<<"\nINVALID NUMBER";
    }
    while(true)
    {
        cout<<"\nENTER THE NUMBER OF FLOORS IN THE BUILDING:";
        cin>>floor;
        if(floor>0)
        {
            break;
        }
        cout<<"\nINVALID NUMBER";
    }
    c.setclasses();
}
void buildings::getbuildings()
{
    cout<<"\nNUMBER OF BUILDINGS IN SCHOOL:"<<num;
    cout<<"\nNUMBER OF FLOORS IN EACH BUILDING:"<<floor;
    c.getclasses();
}
