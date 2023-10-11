#include <iostream>
#include <conio.h>
#include "cbse.h"
#include "state_board.h"
#include"icse.h"
#include<fstream>
#include<string>
#include<stdlib.h>
#include<cstdio>
#include <cstring>

using namespace std;

// Define School classes: cbse, state_board, and icse

class School {
public:
    char name[30];
    // Add common attributes and methods here
};

class cbse : public School {
public:
    // Add CBSE-specific attributes and methods here
};

class state_board : public School {
public:
    // Add State Board-specific attributes and methods here
};

class icse : public School {
public:
    // Add ICSE-specific attributes and methods here
};

// Function to search for a school by name
template <class T>
void SearchSchool(const char* filename) {
    char name[30];
    int z = 0;
    cout << "\nEnter the name of the school you are searching for: ";
    cin.getline(name, 30, '\n');

    T obj;
    ifstream fp(filename, ios::in);
    
    while (fp.read((char*)&obj, sizeof(obj))) {
        if (strcmp(obj.name, name) == 0) {
            z = 1;
            // Print school details here
            cout << "\n\n";
        }
    }

    if (z == 0) {
        cout << "\nSchool not found";
    }

    fp.close();
}

// Function to delete a school by name
template <class T>
void DeleteSchool(const char* filename) {
    char name[30];
    cout << "\nEnter the name of the school to delete: ";
    cin.getline(name, 30, '\n');

    ifstream ptr(filename, ios::in);
    ofstream fp("temp.txt", ios::app);
    T obj;

    while (ptr.read((char*)&obj, sizeof(obj))) {
        if (strcmp(obj.name, name) != 0) {
            fp.write((char*)&obj, sizeof(obj));
        }
    }

    fp.close();
    ptr.close();

    remove(filename);
    rename("temp.txt", filename);
}

// Function to display a list of schools from a file
template <class T>
void ListSchools(const char* filename) {
    ifstream ptr(filename, ios::in);
    T obj;

    cout << "\nList of Schools:\n";

    while (ptr.read((char*)&obj, sizeof(obj))) {
        // Print school details here
        cout << "\n\n";
    }

    ptr.close();
}

int main() {
    cout << "\n\t\t\t\tRECORD OF SCHOOLS IN THE CITY";
    cout << "\n________________________________________________________________________________________________________";

    while (true) {
        cout << "\n\t\t\t\t1. ADD A RECORD OF SCHOOL";
        cout << "\n\t\t\t\t2. SEARCH FOR A SCHOOL'S DETAILS";
        cout << "\n\t\t\t\t3. DELETE A RECORD OF SCHOOL";
        cout << "\n\t\t\t\t4. VIEW DETAILS OF ALL SCHOOLS";
        cout << "\n\t\t\t\t5. EXIT";
        cout << "\nYOUR OPTION: ";
        
        char choice;
        cin >> choice;

        switch (choice) {
        case '1':
            // Add a school record here
            break;
        case '2':
            cout << "\nENTER THE BOARD UNDER WHICH SCHOOL WORKS TO SEARCH FOR SCHOOL's DETAILS:";
            cout << "\n\t\t\t1. CBSE\n\t\t\t2. STATE BOARD\n\t\t\t3. ICSE";
            cout << "\nYOUR OPTION: ";
            
            char option;
            cin >> option;

            if (option == '1') {
                SearchSchool<cbse>("cbse.txt");
            } else if (option == '2') {
                SearchSchool<state_board>("state_board.txt");
            } else if (option == '3') {
                SearchSchool<icse>("icse.txt");
            } else {
                cout << "\nINVALID OPTION:";
                exit(0);
            }
            break;
        case '5':
            exit(0);
        case '3':
            cout << "\nENTER THE BOARD UNDER WHICH SCHOOL WORKS:";
            cout << "\n\t\t\t1. CBSE\n\t\t\t2. STATE BOARD\n\t\t\t3. ICSE";
            cout << "\nYOUR OPTION: ";
            
            cin >> option;

            if (option == '1') {
                DeleteSchool<cbse>("cbse.txt");
            } else if (option == '2') {
                DeleteSchool<state_board>("state_board.txt");
            } else if (option == '3') {
                DeleteSchool<icse>("icse.txt");
            } else {
                cout << "\nINVALID OPTION:";
                exit(0);
            }
            break;
        case '4':
            ListSchools<cbse>("cbse.txt");
            ListSchools<state_board>("state_board.txt");
            ListSchools<icse>("icse.txt");
            break;
        }
    }
}
