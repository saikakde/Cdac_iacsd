// Employee Inheritance:
// Problem Statement: Build a system for managing employees.
// Create a base class Employee with attributes such as name, employee ID,
// and salary. Then, derive classes like Manager and Developer, each with
// its own attributes and methods. Implement a common method, like calculate_salary(),

// in the base class.
#include <bits/stdc++.h>
#include <iostream>
#include "Employee.h"
#include <string.h>
using namespace std;
class Manager : public Employee
{
private:
    int incentive;
    string deptName;

public:
    Manager() : Employee()
    {
        this->incentive = 0;
        this->deptName = "default";
    };
    Manager(int id, string name, double basicSalary, int incentive, string deptName) : Employee(id, name, basicSalary)
    {
        this->incentive = incentive;
        this->deptName = deptName;
    }
    double computeNetSalary()
    {
        cout << "\nnet Salary: ";
        return Employee::computeNetSalary() + incentive;
    }
    void managersFeature()
    {
        cout << "Manager is the main lead of teams: ";
    }

    void display()
    {
        Employee::display();
        cout << "\nincentive: " << incentive;
        cout << "\ndept Name: " << deptName;
        cout << "\nbasic Salary: " << Employee::computeNetSalary();
        computeNetSalary();
    }
    ~Manager()
    {
        cout << endl;
    };
};

class Developer : public Employee
{
private:
    string deptName;
    int hoursWorked, hourlyRate;

public:
    Developer() : Employee()
    {
        hoursWorked = hourlyRate = 0;
    }
    Developer(int id, string name, double basicSalary, int hoursWorked, int hourlyRate) : Employee(id, name, basicSalary)
    {
        this->hourlyRate = hourlyRate;
        this->hoursWorked = hoursWorked;
    }
    double computeNetSalary()
    {
        cout << "\nnet Salary of Developer: " << endl;
        return Employee::computeNetSalary() + (hoursWorked * hourlyRate);
    }
    void getHourlyRate()
    {
        cout << "\nhourlyRate: " << hourlyRate;
    }

    void display()
    {
        Employee::display();
        getHourlyRate();
        cout << "\nhoursWorked: " << hoursWorked;
        cout << "\nbasic Salary: " << Employee::computeNetSalary();
        computeNetSalary();
    }
    void featureDeveloper()
    {
        cout << "developer buids the project";
    }

    ~Developer()
    {
        cout << endl;
    }
};
int main()
{
    // Manager mgr(1, "Sai", 200000, 10000, "Developer");
    // mgr.display();

    // cout << "\n-------------------------------\n";
    // Developer w(2, "Raju", 10000, 5, 100);
    // w.display();

    // double k=w.computeNetSalary();
    // cout<<"net salary of Developer is: "<<k;

    // ------------------------------------------
    // const int MAX_EMPLOYEES = 10;
    // Employee* employees[MAX_EMPLOYEES];
    // int empCount = 0;

    // Manager mgr(1, "Sai", 200000, 10000, "Developer");
    // employees[empCount++] = &mgr;

    // Developer w(2, "Raju", 10000, 5, 100);
    // employees[empCount++] = &w;

    // cout << "\nEmployee Details:\n";
    // for (int i = 0; i < empCount; ++i) {
    //     employees[i]->display();
    //     cout << endl;
    // }
    // -------------------------------------------

    //  int size;
    //     cout << "Enter the size of the employee array: ";
    //     cin >> size;
    // Employee* employees[size];
    vector<Employee *> employees;
    // vector<Employee>::iterator it=employees.begin();;

    int empCount = 0;

    while (true)
    {
        cout << "\nOptions:\n";
        cout << "1. Hire Manager\n";
        cout << "2. Hire Developer\n";
        cout << "3. Display information of all employees' net salary\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int id, incentive;
            string name, deptName;
            double basicSalary;
            cout << "Enter Manager details:\n";
            cout << "ID: ";
            cin >> id;
            cout << "Name: ";
            cin >> name;
            cout << "Basic Salary: ";
            cin >> basicSalary;
            cout << "Incentive: ";
            cin >> incentive;
            cout << "Department Name: ";
            cin >> deptName;
            employees.push_back(new Manager(id, name, basicSalary, incentive, deptName));

            // {
            // Increase array size and add Manager
            // Employee *temp = new Manager[id];
            // for (int i = 0; i < empCount; ++i)
            // {
            //     temp[i] = employees[i];
            // }
            // temp[empCount++] = Manager(id, name, basicSalary, incentive, deptName);
            // delete[] employees;
            // employees = temp;
            // }
            break;
        }
        case 2:
        {
            int id, hoursWorked;
            string name, deptName;
            double basicSalary, hourlyRate;
            cout << "Enter Developer details:\n";
            cout << "ID: ";
            cin >> id;
            cout << "Name: ";
            cin >> name;
            cout << "Basic Salary: ";
            cin >> basicSalary;
            cout << "Hours Worked: ";
            cin >> hoursWorked;
            cout << "Hourly Rate: ";
            cin >> hourlyRate;

            employees.push_back(new Developer(id, name, basicSalary, hoursWorked, hourlyRate));
            // Increase array size and add Developer
            // Employee *temp = new Developer[id];
            // for (int i = 0; i < empCount; ++i)
            // {
            //     temp[i] = employees[i];
            // }
            // temp[empCount++] = Developer(id, name, basicSalary, hoursWorked, hourlyRate);
            // delete[] employees;
            // employees = temp;
            break;
        }
        case 3:
        {

            // while(!employees.empty())
            int i = 0;
            while (i < employees.size())
            {
                if (typeid(employees[i]) == typeid(Manager))
                {

                    Manager *b1 = dynamic_cast<Manager *>(employees[i]);
                    b1->managersFeature();
                }
                if (typeid(employees[i]) == typeid(Developer))
                {

                    Developer *d1 = dynamic_cast<Developer *>(employees[i]);
                    d1->featureDeveloper();
                }
            }
            break;
        }

        default:
            cout << "Invalid choice!\n";
        }
    }
    