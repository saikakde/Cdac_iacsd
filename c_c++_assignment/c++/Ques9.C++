#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    double basicSalary;
    double hra;
    double medical;
    double pf;
    double pt;
    double netSalary;
    double grossSalary;
public:
    Employee() {
        id = 0;
        name = "";
        basicSalary = 0.0;
        hra = 0.0;
        medical = 1000.0;
        pf = 0.0;
        pt = 200.0;
        netSalary = 0.0;
        grossSalary = 0.0;
    }

    Employee(int i, string n, double bs) {
        id = i;
        name = n;
        basicSalary = bs;
        hra = 0.5 * basicSalary;
        medical = 1000.0;
        pf = 0.12 * basicSalary;
        pt = 200.0;
        calculateSalary();
    }

    void calculateSalary() {
        grossSalary = basicSalary + hra + medical;
        netSalary = grossSalary - (pf + pt);
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "Medical Allowance: " << medical << endl;
        cout << "PF: " << pf << endl;
        cout << "PT: " << pt << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    Employee emp1(101, "John Doe", 25000.0);
    emp1.display();

    return 0;
}
