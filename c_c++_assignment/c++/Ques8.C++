#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day, month, year;
public:
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }

    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void display() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

class Employee {
private:
    int id;
    string name;
    Date dob;
public:
    Employee() {
        id = 0;
        name = "Unknown";
    }

    Employee(int i, string n, Date d) {
        id = i;
        name = n;
        dob = d;
    }

    void accept() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
        int day, month, year;
        cout << "Enter Date of Birth (DD MM YYYY): ";
        cin >> day >> month >> year;
        dob = Date(day, month, year);
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Date of Birth: ";
        dob.display();
    }
};

int main() {
    Employee emp1; // Using default constructor
    emp1.display();

    Date d1(15, 9, 1990);
    Employee emp2(101, "John", d1); // Using parameterized constructor
    emp2.display();

    Employee emp3;
    emp3.accept();
    emp3.display();

    return 0;
}
