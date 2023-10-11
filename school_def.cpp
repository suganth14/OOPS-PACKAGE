#include "school.h"
#include<iostream>
using namespace std;
void school::setdata()
{
    cout<<"\nENTER SCHOOL NAME:";
    cin.getline(name,50,'\n');
    cout<<"\nENTER SCHOOL'S ADDRESS:";
    cin.getline(address,70,'\n');
    cout<<"\nENTER CORRESSPONDENT NAME:";
    cin.getline(correspondent,20,'\n');
    cout<<"\nENTER PRINCIPLE NAME:";
    cin.getline(principle,20,'\n');
    cout<<"\nYEAR STARTED:";
    cin>>year;
    while(1)
    {
        cout<<"\nENTER THE NUMBER OF STUDENTS:";
        cin>>num_stu;
        if(num_stu>0)
        {
            break;
        }
        cout<<"\nINVALID NUMBER";
    }
    while(1)
    {
        cout<<"\nENTER THE NUMBER OF TEACHERS:";
        cin>>num_teach;
        if(num_teach>0)
        {
            break;
        }
        cout<<"\nINVALID NUMBER:";
    }
    while(1)
    {
        cout<<"\nENTER SCHOOL'S NET WORTH AMOUNT:";
        cin>>networth;
        if(networth>0)
        {
            break;
        }
        cout<<"\nINVALID NUMBER:";
    }
    b.setbuildings();
    bu.setbus();
    p.setplayground();
    c.setclub();
}
void school::getdata()
{
    cout<<"\nSCHOOL NAME:"<<name;
    cout<<"\nADDRESS:"<<address;
    cout<<"\nYEAR STARTED:"<<year;
    cout<<"\nCORRESSPONDENT:"<<correspondent;
    cout<<"\nPRINCIPLE:"<<principle;
    cout<<"\nNUMBER OF STUDENTS:"<<num_stu;
    cout<<"\nNUMBER OF TEACHERS:"<<num_teach;
    cout<<"\nNET WORTH:"<<networth;
    b.getbuildings();
    bu.getbus();
    p.getplayground();
    c.getclub();
}
