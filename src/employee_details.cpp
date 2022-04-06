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
#include <iomanip>

using namespace std;

int num;

class employee
    {
    private:
        string emp_name;
        int emp_id;
        int emp_age;
        string emp_des;
        string emp_exp;

    public:
        employee()
            {
            }
        void getDetails(bool);
        string name;
        int id;
        int age;
        void getDetails(bool, bool);
        string desig;
        string exp;
    };

/****************************************************************************\
|
|   Function.
|
\****************************************************************************/

/*

Name: getDetails()
Function:
        To get employee details from user
Definition:
        void employee :: getDetails (bool);
Parameter and Arguments:
        Boolean value true is passed as an arguement in order to execute the codes inside the functions.
Returns:
        Functions returning type void: nothing.

*/

void employee :: getDetails (bool yes)
    {
    cout << "\n--- Fill Employee's general details below ---\n" << endl;

    //Getting Employee name
    cout << "Enter Employee Name: " << endl;
    getline(cin, emp_name);

    name = emp_name;

    //Getting Employee ID
    cout << "\nEnter Employee ID: " << endl;
    cin >> emp_id;

    id = emp_id;

    //Getting Employee age
    cout << "\nEnter Employee Age: " << endl;
    cin >> emp_age;

    age = emp_age;
    cin.ignore();
    }

/****************************************************************************\
|
|   Function.
|
\****************************************************************************/

/*

Name: getDetails()
Function:
        To get employee's working details from user
Definition:
        void employee :: getDetails (bool, bool);
Parameter and Arguments:
        Boolean value true is passed as an arguement for both arguements in order to execute the codes inside the functions.
Returns:
        Functions returning type void: nothing.

*/

void employee :: getDetails (bool yes1, bool yes2)
    {
    cout << "\n--- Fill Employee's work details below ---\n" << endl;

    //Getting Employee designation
    cout << "\nEnter Employee's Designation: " << endl;
    getline(cin, emp_des);
    desig = emp_des;

    //Getting Employee experience
    cout << "\nEnter Employee's Experience: " << endl;
    getline(cin, emp_exp);

    exp = emp_exp;
    }

class display : public employee
    {
    public:
        void add ();
    };

/****************************************************************************\
|
|   Function.
|
\****************************************************************************/

/*

Name: add()
Function:
        To call getDetails() function at same time.
Definition:
        void display :: add (void);
Returns:
        Functions returning type void: nothing.

*/

void display :: add ()
    {
    getDetails(true);
    getDetails(true, true);
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
    cout << setw(50) << "This is employee_details.exe v1.1.0" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;

    cout << "It can able to get and display multi number of Employee details as per user's" << endl;
    cout << "wish. An interactive Menu is given for user's choice of operation. Now... \n" << endl;

    extern int num;
    int i;
    int ch;

    cout << "Enter the number of Employee Required: \n" << endl;
    cin >> num;
    cin.ignore();

    display dis[num];

    cout << "\n======== MENU ======== \n" << endl;
    cout << "1. Enter " << num << " Employee details: \n" << endl;
    cout << "2. Display details: \n" << endl;
    cout << "3. Modify number of Employee: \n" << endl;
    cout << "4. Exit \n" << endl;

    while(1)
        {
        cout << "\nEnter the choice: \n" << endl;
        cin >> ch;
        cin.ignore();

        switch(ch)
            {
            case 1:
                {
                cout << "\nYou selected to enter Employee details: \n" << endl;
                for (i = 0; i < num; i++)
                    {
                    dis[i].add();
                    }
                break;
                }
            case 2:
                {
                cout << "\nYou selected Display: \n" << endl;
                cout << "\n-----------------------------------------------------------------------\n" << endl;
                cout << setw(50) << "--- Details of Employee ---" << endl;
                cout << "\n-----------------------------------------------------------------------\n" << endl;
                cout << "ID" << setw(15) << "Name" << setw(12) << "age" << setw(18) << "Designation" << setw(18) << "Experience";
                cout << endl;
                for (i = 0; i < num; i++)
                    {
                    cout << "\n" << dis[i].id << setw(15) << dis[i].name << setw(10) << dis[i].age << setw(21) << dis[i].desig << setw(13) << dis[i].exp;
                    }
                cout << "\n-----------------------------------------------------------------------\n" << endl;
                break;
                }
            case 3:
                {
                cout << "\nEnter the number of Employee Required: \n" << endl;
                cin >> num;
                cin.ignore();
                break;
                }
            case 4:
                {
                return 0;
                }
            default:
                {
                cout << "\nInvalid Entry!!!\n" << endl;
                }
            }
        };
    return 0;
    }