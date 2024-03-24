#include <iostream>
#include "Employee.h"
#include <string.h>
#include <iomanip>
using namespace std;
class Manager : public Employee
{
private:
    int incentive;
    string deptName;
    double basicSalary;

public:
    Manager() : Employee()
    {
        this->incentive = 0;
        this->deptName = "default";
    };
    Manager(int id, string name, double basicSalary, int incentive, string deptName) : Employee(id, name)
    {
        this->incentive = incentive;
        this->deptName = deptName;
        this->basicSalary = basicSalary;
    }
    double computeNetSalary()
    {
        // cout << "\nnet Salary: ";
        return basicSalary + incentive;
    }

    void display()
    {
        Employee::display();
        cout << "\nincentive: " << incentive;
        cout << "\ndept Name: " << deptName;
        cout << "\net Salary: " << computeNetSalary();
        // computeNetSalary();
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
    int hoursWorked, hourlyRate, basicSalary;

public:
    Worker() : Employee()
    {
        hoursWorked = hourlyRate = 0;
    }
    Worker(int id, string name, double basicSalary, int hoursWorked, int hourlyRate) : Employee(id, name)
    {
        this->hourlyRate = hourlyRate;
        this->hoursWorked = hoursWorked;
        this->basicSalary = basicSalary;
    }
    double computeNetSalary()
    {
        // cout << "\nnet Salary of worker: " << endl;
        return basicSalary + (hoursWorked * hourlyRate);
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
        cout << "\net Salary: " << computeNetSalary();
    }

    ~Worker()
    {
        cout << endl;
    }
};
int main()
{
    int empCount = 0;
    Employee *employees[empCount];

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
            cin.ignore();
            cout << "Name: ";
            getline(cin, name);
            cout << "Basic Salary: ";
            cin >> basicSalary;
            cout << "Incentive: ";
            cin >> incentive;
            cout << "Department Name: ";
            cin.ignore();
            getline(cin, deptName);

            // Increase array size and add Manager
            // Employee *temp = new Manager[id];
            // for (int i = 0; i < empCount; ++i)
            // {
            //     temp[i] = employees[i];
            // }
            employees[empCount++] = new Manager(id, name, basicSalary, incentive, deptName);
            // delete[] employees;
            // employees = temp;
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
            cin.ignore();
            cout << "Name: ";
            // cin >> name;
            getline(cin, name);

            cout << "Basic Salary: ";
            cin >> basicSalary;
            cout << "Hours Worked: ";
            cin >> hoursWorked;
            cout << "Hourly Rate: ";
            cin >> hourlyRate;

            // Increase array size and add Worker
            // Employee *temp = new Worker[id];
            // for (int i = 0; i < empCount; ++i)
            // {
            //     temp[i] = employees[i];
            // }
            // temp[empCount++] = Worker(id, name, basicSalary, hoursWorked, hourlyRate);
            // delete[] employees;
            // employees = temp;
            employees[empCount++] = new Worker(id, name, basicSalary, hoursWorked, hourlyRate);

            break;
        }
        case 3:
        {
            cout << fixed << setprecision(2); // Set precision to 2 decimal places
            cout << "\nEmployee Details:\n";
            for (int i = 0; i < empCount; ++i)
            {
                employees[i]->display();                                              // Use arrow operator to access methods for pointers
                cout << "\nNet Salary: " << employees[i]->computeNetSalary() << endl; // Use arrow operator
                cout << endl;
                // computeNetSalary();
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