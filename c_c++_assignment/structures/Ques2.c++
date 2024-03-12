#include <iostream>
#include <cstring>
using namespace std;

// Structure definition for Employee
struct Employee {
    int id;
    char name[50];
    float salary;
};

// Function prototypes
void acceptDetails(Employee employees[], int n);
void searchByName(Employee employees[], int n, const char* name);
void searchById(Employee employees[], int n, int id);
void displayAll(Employee employees[], int n);
void displaySalaryAbove25000(Employee employees[], int n, float threshold);
void displayMaxSalaryEmployee(Employee employees[], int n);

int main() {
    int n, choice;
    cout << "Enter the number of employees: ";
    cin >> n;
    Employee employees[n];

    acceptDetails(employees, n);

    do {
        cout << "\nMenu:\n";
        cout << "1. Search by name\n";
        cout << "2. Search by id\n";
        cout << "3. Display all\n";
        cout << "4. Display all employees with salary > 25000\n";
        cout << "5. Display employee with maximum salary\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                char name[50];
                cout << "Enter name to search: ";
                cin.ignore();
                cin.getline(name, 50);
                searchByName(employees, n, name);
                break;
            }
            case 2: {
                int id;
                cout << "Enter id to search: ";
                cin >> id;
                searchById(employees, n, id);
                break;
            }
            case 3:
                displayAll(employees, n);
                break;
            case 4:
                displaySalaryAbove25000(employees, n, 25000);
                break;
            case 5:
                displayMaxSalaryEmployee(employees, n);
                break;
            case 6:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while(choice != 6);

    return 0;
}

// Function to accept details of employees
void acceptDetails(Employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter details for employee " << i+1 << ":\n";
        cout << "ID: ";
        cin >> employees[i].id;
        cout << "Name: ";
        cin.ignore();
        cin.getline(employees[i].name, 50);
        cout << "Salary: ";
        cin >> employees[i].salary;
    }
}

// Function to search employee by name
void searchByName(Employee employees[], int n, const char* name) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (strcmp(employees[i].name, name) == 0) {
            cout << "Employee found!\n";
            cout << "ID: " << employees[i].id << endl;
            cout << "Name: " << employees[i].name << endl;
            cout << "Salary: " << employees[i].salary << endl;
            found = true;
        }
    }
    if (!found)
        cout << "Employee not found!\n";
}

// Function to search employee by ID
void searchById(Employee employees[], int n, int id) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (employees[i].id == id) {
            cout << "Employee found!\n";
            cout << "ID: " << employees[i].id << endl;
            cout << "Name: " << employees[i].name << endl;
            cout << "Salary: " << employees[i].salary << endl;
            found = true;
        }
    }
    if (!found)
        cout << "Employee not found!\n";
}

// Function to display details of all employees
void displayAll(Employee employees[], int n) {
    cout << "All employee details:\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << employees[i].id << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Salary: " << employees[i].salary << endl;
        cout << endl;
    }
}

// Function to display employees with salary above a threshold
void displaySalaryAbove25000(Employee employees[], int n, float threshold) {
    cout << "Employees with salary > " << threshold << ":\n";
    for (int i = 0; i < n; i++) {
        if (employees[i].salary > threshold) {
            cout << "ID: " << employees[i].id << endl;
            cout << "Name: " << employees[i].name << endl;
            cout << "Salary: " << employees[i].salary << endl;
            cout << endl;
        }
    }
}

// Function to display employee with maximum salary
void displayMaxSalaryEmployee(Employee employees[], int n) {
    float maxSalary = employees[0].salary;
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (employees[i].salary > maxSalary) {
            maxSalary = employees[i].salary;
            maxIndex = i;
        }
    }
    cout << "Employee with maximum salary:\n";
    cout << "ID: " << employees[maxIndex].id << endl;
    cout << "Name: " << employees[maxIndex].name << endl;
    cout << "Salary: " << employees[maxIndex].salary << endl;
}
