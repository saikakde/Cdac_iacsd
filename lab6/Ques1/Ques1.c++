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

// 1.3 Worker state  --id,name,basic,deptId,hoursWorked,hourlyRate
// Methods :
// 1.  compute net salary (formula:  = basic+(hoursWorked*hourlyRate) --override computeNetSalary
// 2. get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter)

class Worker : public Employee
{
private:
    string deptName;
    int hoursWorked, hourlyRate;

public:
    Worker() : Employee()
    {
        hoursWorked = hourlyRate = 0;
    }
    Worker(int id, string name, double basicSalary, int hoursWorked, int hourlyRate) : Employee(id, name, basicSalary)
    {
        this->hourlyRate = hourlyRate;
        this->hoursWorked = hoursWorked;
    }
    double computeNetSalary()
    {
        cout << "\nnet Salary of worker: " << endl;
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

    ~Worker()
    {
        cout << endl;
    }
};
int main()
{
    // Manager mgr(1, "Sai", 200000, 10000, "Developer");
    // mgr.display();

    // cout << "\n-------------------------------\n";
    // Worker w(2, "Raju", 10000, 5, 100);
    // w.display();

    // double k=w.computeNetSalary();
    // cout<<"net salary of worker is: "<<k;

    // ------------------------------------------
    // const int MAX_EMPLOYEES = 10;
    // Employee* employees[MAX_EMPLOYEES];
    // int empCount = 0;

    // Manager mgr(1, "Sai", 200000, 10000, "Developer");
    // employees[empCount++] = &mgr;

    // Worker w(2, "Raju", 10000, 5, 100);
    // employees[empCount++] = &w;

    // cout << "\nEmployee Details:\n";
    // for (int i = 0; i < empCount; ++i) {
    //     employees[i]->display();
    //     cout << endl;
    // }
    // -------------------------------------------

    //  int size
    ;
    //     cout << "Enter the size of the employee array: ";
    //     cin >> size;
    // Employee* employees[size];
    Employee *employees = nullptr;
    int empCount = 0;

    while (true)
    {
        cout << "\nOptions:\n";
        cout << "1. Hire Manager\n";
        cout << "2. Hire Worker\n";
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

            // Increase array size and add Manager
            Employee *temp = new Manager[id];
            for (int i = 0; i < empCount; ++i)
            {
                temp[i] = employees[i];
            }
            temp[empCount++] = Manager(id, name, basicSalary, incentive, deptName);
            delete[] employees;
            employees = temp;
            break;
        }
        case 2:
        {
            int id, hoursWorked;
            string name, deptName;
            double basicSalary, hourlyRate;
            cout << "Enter Worker details:\n";
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

            // Increase array size and add Worker
            Employee *temp = new Worker[id];
            for (int i = 0; i < empCount; ++i)
            {
                temp[i] = employees[i];
            }
            temp[empCount++] = Worker(id, name, basicSalary, hoursWorked, hourlyRate);
            delete[] employees;
            employees = temp;
            break;
        }
        case 3:
        {
            cout << "\nEmployee Details:\n";
            for (int i = 0; i < empCount; ++i)
            {
                employees[i].display();
                cout << endl;
            }
            break;
        }
        case 4:
            // Release memory before exiting
            delete[] employees;
            return 0;
        default:
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}