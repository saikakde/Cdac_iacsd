// 1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
// Accept data (acceptInfo()) and display  using display member function.
// Also display total,percentage and grade.

#include <iostream>
using namespace std;

class Student {
private:
    int rollno;
    int marks1;
    int marks2;
    int marks3;

public:
    void acceptInfo() {
        cout << "Enter Roll Number: ";
        cin >> rollno;
        cout << "Enter Marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter Marks for Subject 2: ";
        cin >> marks2;
        cout << "Enter Marks for Subject 3: ";
        cin >> marks3;
    }

    void display() {
        cout << "\nStudent Roll Number: " << rollno << endl;
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
        cout << "Marks in Subject 3: " << marks3 << endl;
    }

    int calculateTotal() {
        return marks1 + marks2 + marks3;
    }

    float calculatePercentage() {
        return (static_cast<float>(calculateTotal()) / 3.0);
    }

    char calculateGrade() {
        float percentage = calculatePercentage();
        if (percentage >= 90)
            return 'A';
        else if (percentage >= 80)
            return 'B';
        else if (percentage >= 70)
            return 'C';
        else if (percentage >= 60)
            return 'D';
        else if (percentage >= 40)
            return 'E';
        else
            return 'F';
    }
};

int main() {
    Student student;

    student.acceptInfo();

    student.display();

    int total = student.calculateTotal();
    float percentage = student.calculatePercentage();
    char grade = student.calculateGrade();

    cout << "\nTotal Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
