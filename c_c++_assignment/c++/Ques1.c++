#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollno;
    int marks1, marks2, marks3;
public:
    void acceptInfo() {
        cout << "Enter Roll Number: ";
        cin >> rollno;
        cout << "Enter Marks for 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }

    void display() {
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
        cout << "Marks in Subject 3: " << marks3 << endl;
        int total = marks1 + marks2 + marks3;
        float percentage = (total / 3.0);
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        if (percentage >= 60)
            cout << "Grade: First Division" << endl;
        else if (percentage >= 45)
            cout << "Grade: Second Division" << endl;
        else
            cout << "Grade: Third Division" << endl;
    }
};

int main() {
    Student s;
    s.acceptInfo();
    s.display();
    return 0;
}
