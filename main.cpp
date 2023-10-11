#include <iostream>
#include <conio.h>
#include "cbse.h"
#include "state_board.h"
#include"icse.h"
#include<fstream>
#include<string>
#include<stdlib.h>
#include<cstdio>
using namespace std;
int main()
{
    cout<<"\n\t\t\t\tRECORD OF SCHOOLS IN THE CITY";
    cout<<"\n________________________________________________________________________________________________________";
    int choice,option;
    while(1)
    {
        cout<<"\n\t\t\t\t1.ADD A RECORD OF SCHOOL";
        cout<<"\n\t\t\t\t2.SEACH FOR A SCHOOL'S DETAILS";
        cout<<"\n\t\t\t\t3.DELETE A RECORD OF SCHOOL";
        cout<<"\n\t\t\t\t4.VIEW DETAILS OF ALL SCHOOLS";
        cout<<"\n\t\t\t\t5.EXIT";
        cout<<"\nYOUR OPTION:";
        fflush(stdin);
        choice = getche();
        switch(choice)
        {
        case '1':
            cout<<"\nENTER THE BOARD UNDER WHICH SCOOL WORKS:";
            cout<<"\n\t\t\t1.CBSE\n\t\t\t2.STATE BOARD\n\t\t\t3.ICSE";
            cout<<"\nYOUR OPTION:";
            fflush(stdin);
            option=getche();
            if(option=='1')
            {
                cbse c;
                c.setcbse();
                ofstream ptr;
                ptr.open("cbse.txt",ios::app);
                ptr.write((char*)&c,sizeof(c));
                ptr.close();
            }
            else if(option=='2')
            {
                state_board s;
                s.setstate();
                ofstream ptr;
                ptr.open("state_board.txt",ios::app);
                ptr.write((char*)&s,sizeof(s));
                ptr.close();
            }
            else if(option=='3')
            {
                icse i;
                i.seticse();
                ofstream ptr;
                ptr.open("icse.txt",ios::app);
                ptr.write((char*)&i,sizeof(i));
                ptr.close();
            }
            else
            {
                cout<<"\nINVALID OPTION:";
                exit(0);
            }
            break;
        case '2':
            cout<<"\nENTER THE BOARD UNDER WHICH SCOOL WORKS TO SEARCH FOR SCHOOL's DETAILS:";
            cout<<"\n\t\t\t1.CBSE\n\t\t\t2.STATE BOARD\n\t\t\t3.ICSE";
            cout<<"\nYOUR OPTION:";
            fflush(stdin);
            option=getche();
            if(option=='1')
            {
                char name[20];
                int z=0;
                cout<<"\nENTER THE NAME OF SCHOOL YOU ARE SEARCHING FOR:";
                cin.getline(name,20,'\n');
                cbse obj;
                ifstream fp;
                fp.open("cbse.txt",ios::in);
                while(fp.read((char*)&obj,sizeof(obj)))
                {
                    if(ret_name(obj,name))
                    {
                        z=1;
                        obj.getcbse();
                        cout<<"\n\n";
                    }
                }
                if(z==0)
                {
                    cout<<"\nSCHOOL NOT FOUND:";
                }
                fp.close();
            }
            else if(option=='2')
            {
                char name[20];
                int z=0;
                cout<<"\nENTER THE NAME OF SCHOOL YOU ARE SEARCHING FOR:";
                cin.getline(name,20,'\n');
                state_board obj;
                ifstream fp;
                fp.open("state_board.txt",ios::in);
                while(fp.read((char*)&obj,sizeof(obj)))
                {
                    if(ret_name(obj,name))
                    {
                        z=1;
                        obj.getstate();
                        cout<<"\n\n";
                    }
                }
                if(z==0)
                {
                    cout<<"\nSCHOOL NOT FOUND:";
                }
                fp.close();
            }
            else if(option=='3')
            {
                char name[20];
                int z=0;
                cout<<"\nENTER THE NAME OF SCHOOL YOU ARE SEARCHING FOR:";
                cin.getline(name,20,'\n');
                icse obj;
                ifstream fp;
                fp.open("icse.txt",ios::in);
                while(fp.read((char*)&obj,sizeof(obj)))
                {
                    if(ret_name(obj,name))
                    {
                        z=1;
                        obj.geticse();
                        cout<<"\n\n";
                    }
                }
                if(z==0)
                {
                    cout<<"\nSCHOOL NOT FOUND:";
                }
                fp.close();
            }
            else
            {
                cout<<"\nINVALID OPTION:";
                exit(0);
            }
            break;
        case '5':
            exit(0);
        case '3':
            cout<<"\nENTER THE BOARD UNDER WHICH SCOOL WORKS:";
            cout<<"\n\t\t\t1.CBSE\n\t\t\t2.STATE BOARD\n\t\t\t3.ICSE";
            cout<<"\nYOUR OPTION:";
            fflush(stdin);
            option=getche();
            if(option=='1')
            {
                char name[30];
                cout<<"\nENTER THE NAME OF SCHOOL TO DELETE:";
                cin.getline(name,30,'\n');
                ifstream ptr;
                ofstream fp;
                cbse obj;
                fp.open("temp.txt",ios::app);
                ptr.open("cbse.txt",ios::in);
                while(ptr.read((char*)&obj,sizeof(obj)))
                {
                    if(ret_name(obj,name)==0)
                    {
                        fp.write((char*)&obj,sizeof(obj));
                    }
                }
                fp.close();
                ptr.close();
                remove("cbse.txt");
                rename("temp.txt","cbse.txt");
            }
            else if(option=='2')
            {
                char name[30];
                cout<<"\nENTER THE NAME OF SCHOOL TO DELETE:";
                cin.getline(name,30,'\n');
                ifstream ptr;
                ofstream fp;
                state_board obj;
                fp.open("temp.txt",ios::app);
                ptr.open("state_board.txt",ios::in);
                while(ptr.read((char*)&obj,sizeof(obj)))
                {
                    if(ret_name(obj,name)==0)
                    {
                        fp.write((char*)&obj,sizeof(obj));
                    }
                }
                fp.close();
                ptr.close();
                remove("state_board.txt");
                rename("temp.txt","state_board.txt");
            }
            else if(option=='3')
            {
                char name[30];
                cout<<"\nENTER THE NAME OF SCHOOL TO DELETE:";
                cin.getline(name,30,'\n');
                ifstream ptr;
                ofstream fp;
                icse obj;
                fp.open("temp.txt",ios::app);
                ptr.open("icse.txt",ios::in);
                while(ptr.read((char*)&obj,sizeof(obj)))
                {
                    if(ret_name(obj,name)==0)
                    {
                        fp.write((char*)&obj,sizeof(obj));
                    }
                }
                fp.close();
                ptr.close();
                remove("icse.txt");
                rename("temp.txt","icse.txt");
            }
            break;
        case '4':
            ifstream ptr;
            cbse obj;
            ptr.open("cbse.txt",ios::in);
            cout<<"\nLIST OF CBSE SCHOOLS:\n";
            while(ptr.read((char*)&obj,sizeof(obj)))
            {
                obj.getcbse();
                cout<<"\n\n";
            }
            ptr.close();
            ifstream pt;
            state_board ob;
            pt.open("state_board.txt",ios::in);
            cout<<"\nLIST OF STATE BOARD SCHOOLS:\n";
            while(pt.read((char*)&ob,sizeof(ob)))
            {
                ob.getstate();
                cout<<"\n\n";
            }
            pt.close();
            ifstream fp;
            icse i;
            fp.open("icse.txt",ios::in);
            cout<<"\nLIST OF ICSE SCHOOLS:\n";
            while(fp.read((char*)&i,sizeof(i)))
            {
                i.geticse();
                cout<<"\n\n";
            }
            fp.close();
            break;
        }
    }
}
