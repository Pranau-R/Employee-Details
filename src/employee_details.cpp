/*

Module: employee_details.cpp
Function:
    To display Employee details using classes and objects.
Copyright notice:
    This file copyright (C) 2022 by

    MCCI Corporation
    3520 Krums Corners Road
    Ithaca, NY 14850

    An unpublished work. All rights reserved.

    This file is proprietary information, and may not be disclosed or
    copied without the prior permission of MCCI Corporation.

Author:
    Pranau R, MCCI Corporation   April 2022

*/

#include <iostream>
#include <string.h>
#include <cstdio>

using namespace std;

class employee
    {
    private:
        string emp_name;
        int emp_id;
        int emp_age;
        string emp_bg;
        string emp_gen;
        int emp_salary;

    public:
        employee();
        string name;
        int id;
        int age;
        string bg;
        string gen;
        int salary;
    };

/****************************************************************************\
|
|   Function.
|
\****************************************************************************/

/*

Name: employee()
Function:
        To get employee details from user
Definition:
        employee :: employee (void);
Returns:
        Functions returning type nothing: nothing.

*/

employee :: employee ()
    {
    cout << "\n--- Fill employee's general details below ---\n" << endl;

    //Getting Employee name
    cout << "Enter Employee name: " << endl;
    getline(cin, emp_name);

    name = emp_name;

    //Getting Employee ID
    cout << "\nEnter Employee ID: " << endl;
    cin >> emp_id;

    id = emp_id;

    //Getting Employee age
    cout << "\nEnter Employee age: " << endl;
    cin >> emp_age;

    age = emp_age;
    cin.ignore();

    //Getting Employee blood group
    cout << "\nEnter Employee blood group: " << endl;
    getline(cin, emp_bg);

    bg = emp_bg;

    //Getting Employee gender
    cout << "\nEnter Employee gender: " << endl;
    getline(cin, emp_gen);

    gen = emp_gen;

    //Getting Employee salary
    cout << "\nEnter Employee salary: " << endl;
    cin >> emp_salary;

    salary = emp_salary;
    cin.ignore();
    }

class emp_work
    {
    private:
        string dept;
        string task;
        string timetk;

    public:
        emp_work();
        string depart;
        string tsk;
        string ttk;
    };

/****************************************************************************\
|
|   Function.
|
\****************************************************************************/

/*

Name: emp_work()
Function:
        To get employee's working details from user
Definition:
        emp_work :: emp_work (void);
Returns:
        Functions returning type nothing: nothing.

*/

emp_work :: emp_work()
    {
    cout << "\n--- Fill employee's work details below ---\n" << endl;

    //Getting Employee department
    cout << "\nEnter Employee's department: " << endl;
    getline(cin, dept);

    depart = dept;

    //Getting Employee task
    cout << "\nEnter Employee's task: " << endl;
    getline(cin, task);

    tsk = task;

    //Getting Employee time taken for the task
    cout << "\nEnter Employee's time taken to complete a task: " << endl;
    getline(cin, timetk);

    ttk = timetk;
    }

class display : public employee, public emp_work
    {
    public:
        void show();
    };

/****************************************************************************\
|
|   Function.
|
\****************************************************************************/

/*

Name: show()
Function:
        To display employee details.
Definition:
        void display :: show (void);
Returns:
        Functions returning type void: nothing.

*/

void display :: show ()
    {
    cout << "\n--- The Employee's General details are ---\n" << endl;

    cout << "Employee Name:\n" << name << "\n" << endl;
    cout << "Employee ID:\n" << id << "\n" << endl;
    cout << "Employee age:\n" << age << "\n" << endl;
    cout << "Employee blood group:\n" << bg << "\n" << endl;
    cout << "Employee gender:\n" << gen << "\n" << endl;
    cout << "Employee salary:\n" << salary << "\n" << endl;

    cout << "\n--- The Employee's work details are ---\n" << endl;

    cout << "Enter Employee department:\n" << depart << "\n" << endl;
    cout << "Enter Employee's task:\n" << tsk << "\n" << endl;
    cout << "Enter Employee's time taken to complete the task:\n" << ttk << "\n" << endl;

    }

/****************************************************************************\
|
|   Main Function.
|
\****************************************************************************/

/*

Name: main()
Function:
        To display employ details
Definition:
        int main (void);
Returns:
        Functions returning type int: returns 0.

*/

int main()
    {
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "This is employee_details.exe v1.0.0" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;

    cout << "It can able to get Employee details such as general details and work related" << endl;
    cout << "details from user and display them in an organised manner. Now... \n" << endl;

    display dis;

    dis.show();

    getchar();
    return 0;
    }