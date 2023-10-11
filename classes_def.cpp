#include "classes.h"
#include<iostream>
using namespace std;
void classes::setclasses()
{
    while(1)
    {
        cout<<"\nENTER THE NUMBER OF CLASSROOMS IN SCHOOL:";
        cin>>num;
        if(num>0)
        {
            break;
        }
        cout<<"\nINVALID NUMBER:";
    }
    while(1)
    {
        cout<<"\nENTER THE AVERAGE AREA(in sq.m) OF EACH CLASS:";
        cin>>area;
        if(area>0)
        {
            break;
        }
        cout<<"\nINVALID NUMBER:";
    }
    t.settableschairs();
}
void classes::getclasses()
{
    cout<<"\nNUMBER OF CLASSROOMS IN SCHOOL:"<<num;
    cout<<"\nAVERAGE AREA OF EACH CLASS:"<<area;
    t.gettableschairs();
}
