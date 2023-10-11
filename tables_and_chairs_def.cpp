#include "tables_and_chairs.h"
#include<iostream>
using namespace std;
void tables_chairs::settableschairs()
{
    while(true)
    {
        cout<<"\nENTER THE NUMBER OF TABLES IN SCHOOL:";
        cin>>num_table;
        if(num_table>0)
        {
            break;
        }
        cout<<"\nINVALID NUMBER:";
    }
    while(true)
    {
        cout<<"\nENTER THE NUMBER OF CHAIRS IN SCHOOL:";
        cin>>num_chair;
        if(num_chair>0)
        {
            break;
        }
        cout<<"\nINVALID NUMBER";
    }
}
void tables_chairs::gettableschairs()
{
    cout<<"\nNUMBER OF TABLES IN SCHOOL:"<<num_table;
    cout<<"\nNUMBER OF CHAIRS IN SCHOOL:"<<num_chair;
}
