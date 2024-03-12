#include <iostream>
using namespace std;

class Date {
private:
    int dd, mm, yy;
public:
    Date() {
        dd = 0;
        mm = 0;
        yy = 0;
    }

    Date(int d, int m, int y) {
        dd = d;
        mm = m;
        yy = y;
    }

    void setDay(int d) {
        dd = d;
    }

    void setMonth(int m) {
        mm = m;
    }

    void setYear(int y) {
        yy = y;
    }

    int getDay() {
        return dd;
    }

    int getMonth() {
        return mm;
    }

    int getYear() {
        return yy;
    }

    void display() {
        cout << "Date: " << dd << "/" << mm << "/" << yy << endl;
    }
};

int main() {
    Date d1;
    d1.display();

    Date d2(12, 3, 2023);
    d2.display();

    d1.setDay(25);
    d1.setMonth(6);
    d1.setYear(2022);
    d1.display();

    return 0;
}
