// Person and Student Inheritance:
// Problem Statement: Model a system for handling individuals and students within
//  an educational institution. Create a base class Person with attributes like name and age.
//   Derive a Student class with additional attributes like student ID and GPA, 
//   inheriting the common attributes from the Person class.
#include<bits/stdc++.h>
#include"Person.h"
using namespace std;

class Student:public Person
{
private:
    int id;
    float gpa;
public:
    Student(int id,string name,int age,float gpa):Person(name,age){
        this->gpa = gpa;
        this->id = id;
    };
    void display(){
        cout<<"id: "<<id<<endl;
        Person::display();
        cout<<"gpa :"<<gpa<<endl;
    }
    ~Student();
};

int main() {
    const int MAX_STUDENTS = 100; // Maximum number of students
    Person* p[MAX_STUDENTS]; // Array of pointers to Person objects
    int count = 0; // Counter to keep track of the number of students added

    int ch;
    do {
        cout << "Enter the choice (1: Add Student, 2: Display All Students, 0: Exit): ";
        cin >> ch;

        switch (ch) {
            case 1: {
                int id, age;
                string name;
                float gpa;

                cout << "Enter student ID, name, age, and GPA: ";
                cin >> id >> name >> age >> gpa;

                // Dynamically allocate memory for a new Student object and add it to the array
                p[count++] = new Student(id, name, age, gpa);
                break;
            }
            case 2: {
                // Display details of all students in the array
                for (int i = 0; i < count; ++i) {
                    Student* student = dynamic_cast<Student*>(p[i]); // Downcast to Student pointer
                    if (student) {
                        student->display();
                        cout << "-------------------" << endl;
                    }
                }
                break;
            }
            case 0:
                // Free dynamically allocated memory before exiting
                for (int i = 0; i < count; ++i) {
                    delete p[i];
                }
                exit(0);
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    } while (ch != 0);

    return 0;
}