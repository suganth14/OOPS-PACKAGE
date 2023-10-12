#include<iostream>
#include "playground.h"
using namespace std;
void playground::setplayground()
{
    while(true)
    {
        cout<<"\nENTER THE NUMBER OF PLAYGROUND IN SCHOOL(enter 0 if there is no playground):";
        cin>>num;
        if(num>=0)
        {
            break;
        }
        cout<<"\nINVALID NUMBER:";
    }
    if(num>0)
    {
        while(true)
        {
            cout<<"\nENTER THE AVERAGE AREA(in sq.m)OF PLAYGROUND IN SCHOOL:";
            cin>>area;
            if(area>0)
            {
                break;
            }
            cout<<"\nINVALID NUMBER:";
        }
    }
}
void playground::getplayground() const
{
    cout<<"\nNUMBER OF PLAYGROUND IN SCHOOL:"<<num;
    if(num>0)
    {
        cout<<"\nAVERAGE AREA OF PLAYGROUND:"<<area;
    }
}
