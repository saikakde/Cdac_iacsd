#include <iostream>
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

int main() {
    Date date1; // Using default constructor
    date1.display();

    Date date2(25, 12, 2023); // Using parameterized constructor
    date2.display();

    return 0;
}
