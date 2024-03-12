#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    int rollNumber;
    char name[50];
    float marks[3];
    float percentage;
};

void acceptDetails(Student students[], int n);
void searchStudent(Student students[], int n);
void modifyStudent(Student students[], int n);
void displayAllStudents(Student students[], int n);
void displayStudentsAbove80(Student students[], int n);
void displayMaxPercentageStudent(Student students[], int n);

int main() {
    int n, choice;
    cout << "Enter the number of students: ";
    cin >> n;
    Student students[n];

    acceptDetails(students, n);

    do {
        cout << "\nMenu:\n";
        cout << "1. Search\n";
        cout << "2. Modify\n";
        cout << "3. Display all student details\n";
        cout << "4. Display all students with percentage > 80\n";
        cout << "5. Display student with maximum percentage\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                searchStudent(students, n);
                break;
            case 2:
                modifyStudent(students, n);
                break;
            case 3:
                displayAllStudents(students, n);
                break;
            case 4:
                displayStudentsAbove80(students, n);
                break;
            case 5:
                displayMaxPercentageStudent(students, n);
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

void acceptDetails(Student students[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i+1 << ":\n";
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Name: ";
        cin.ignore();
        cin.getline(students[i].name, 50);
        cout << "Marks in 3 subjects: ";
        for (int j = 0; j < 3; j++)
            cin >> students[i].marks[j];
        float sum = 0;
        for (int j = 0; j < 3; j++)
            sum += students[i].marks[j];
        students[i].percentage = (sum / 3);
    }
}

void searchStudent(Student students[], int n) {
    int roll;
    cout << "Enter roll number to search: ";
    cin >> roll;
    for (int i = 0; i < n; i++) {
        if (students[i].rollNumber == roll) {
            cout << "Student found!\n";
            cout << "Roll Number: " << students[i].rollNumber << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Percentage: " << students[i].percentage << endl;
            return;
        }
    }
    cout << "Student not found!\n";
}

void modifyStudent(Student students[], int n) {
    int roll;
    cout << "Enter roll number to modify: ";
    cin >> roll;
    for (int i = 0; i < n; i++) {
        if (students[i].rollNumber == roll) {
            cout << "Enter new details:\n";
            cout << "Name: ";
            cin.ignore();
            cin.getline(students[i].name, 50);
            cout << "Marks in 3 subjects: ";
            for (int j = 0; j < 3; j++)
                cin >> students[i].marks[j];
            float sum = 0;
            for (int j = 0; j < 3; j++)
                sum += students[i].marks[j];
            students[i].percentage = (sum / 3);
            cout << "Student details modified!\n";
            return;
        }
    }
    cout << "Student not found!\n";
}

void displayAllStudents(Student students[], int n) {
    cout << "All student details:\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll Number: " << students[i].rollNumber << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Percentage: " << students[i].percentage << endl;
    }
}

void displayStudentsAbove80(Student students[], int n) {
    cout << "Students with percentage > 80:\n";
    for (int i = 0; i < n; i++) {
        if (students[i].percentage > 80) {
            cout << "Roll Number: " << students[i].rollNumber << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Percentage: " << students[i].percentage << endl;
        }
    }
}

void displayMaxPercentageStudent(Student students[], int n) {
    float maxPercentage = 0;
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (students[i].percentage > maxPercentage) {
            maxPercentage = students[i].percentage;
            index = i;
        }
    }
    if (index != -1) {
        cout << "Student with maximum percentage:\n";
        cout << "Roll Number: " << students[index].rollNumber << endl;
        cout << "Name: " << students[index].name << endl;
        cout << "Percentage: " << students[index].percentage << endl;
    }
    else {
        cout << "No student found!\n";
    }
}
