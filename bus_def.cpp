#include<iostream>
#include "bus.h"
using namespace std;
void bus::setbus()
{
    while(1)
    {
        cout<<"\nENTER THE NUMBER OF BUSSES IN SCHOOL(enter 0 if there are no busses):";
        cin>>num;
        if(num>=0)
        {
            break;
        }
        cout<<"\nINVALID NUMBER:";
    }
    if(num>0)
    {
        cout<<"\nENTER THE COLOUR OF BUSSES IN SCHOOL:";
        cin>>colour;
    }
}
void bus::getbus()
{
    cout<<"\nNUMBER OF BUSSES IN SCHOOL:"<<num;
    if(num>0)
    {
        cout<<"\nCOLOUR OF BUSSES IN SCHOOL:"<<colour;
    }
}
