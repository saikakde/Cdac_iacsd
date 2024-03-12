#include <iostream>
using namespace std;
class Student
{
private:
    int rollNo, marks1, marks2, marks3, total;
    float percentage;
    char grade;

public:
    void acceptInfo()
    {
        int r, m1, m2, m3;
        cout << "enter the roll no\n";
        cin >> r;
        cout << "enter the marks1\n";
        cin >> m1;
        cout << "enter the marks2\n";
        cin >> m2;
        cout << "enter the marks3\n";
        cin >> m3;

        this->rollNo = r;
        this->marks1 = m1;
        this->marks2 = m2;
        this->marks3 = m3;
    }

    void display()
    {
        total = marks1+marks2+marks3;
        percentage = ((float)total/300)*100;
        cout << "roll no: " << rollNo << endl;
        cout << "marks1: " << marks1 << endl;
        cout << "marks2: " << marks2 << endl;
        cout << "marks3: " << marks3 << endl;
        cout << "total marks: " << total << endl;
        cout << "percentage: " << percentage << endl;
    }
};
int main()
{
    Student s1;
    s1.acceptInfo();
    s1.display();
    return 0;
}