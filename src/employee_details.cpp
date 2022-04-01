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
        //employee(int b);
        //employee(int c);
        //employee(std::string d);
        //employee(std::string e);
        //employee(int f);
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
        Functions returning type void: nothing.

*/

employee :: employee ()
    {
    cout << "Enter Employee name: " << endl;
    getline(cin, emp_name);

    //cout << "The name you entered is: " << emp_name << endl;

    cout << "Enter Employee ID: " << endl;
    cin >> emp_id;

    //cout << "The ID you entered is: " << emp_id << endl;

    cout << "Enter Employee age: " << endl;
    cin >> emp_age;

    cout << "Enter Employee blood group: " << endl;
    getline(cin, emp_bg);

    cout << "Enter Employee gender: " << endl;
    getline(cin, emp_gen);

    cout << "Enter Employee salary: " << endl;
    cin >> emp_salary;
    }

class emp_work
    {
    private:
        string dept;
        string task;
        string timetk;

    public:
        emp_work();
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
        Functions returning type void: nothing.

*/

emp_work :: emp_work()
    {
    cout << "Enter Employee's department: " << endl;
    getline(cin, dept);

    cout << "Enter Employee's task: " << endl;
    getline(cin, task);

    cout << "Enter Employee's time taken to complete a task: " << endl;
    getline(cin, timetk);
    }

class display : public employee, public emp_work
    {
    public:
        display ();
    };

display :: display ()
    {
    cout << "Fill employee's general details below" << endl;
    employee();

    cout << "Fill employee's work details below" << endl;
    emp_work();
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
    //cout << "Write employee details:" << endl;
    display dis;

    dis.display();

    return 0;
    }













/*
employee :: employee (int b)
    {
    cout << "Enter Employee ID: " << endl;
    cin >> b;
    emp_id = b;
    }

employee :: employee (int c)
    {
    cout << "Enter Employee age: " << endl;
    cin >> c;
    emp_age = c;
    }

employee :: employee (string d)
    {
    cout << "Enter Employee blood group: " << endl;
    getline(cin, d);
    emp_bg = d;
    }

employee :: employee (string e)
    {
    cout << "Enter Employee gender: " << endl;
    getline(cin, e);
    emp_gen = e;
    }

employee :: employee (int f)
    {
    cout << "Enter Employee salary: " << endl;
    cin >> f;
    emp_salary = f;
    }
*/
