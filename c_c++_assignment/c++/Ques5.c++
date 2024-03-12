#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(int a, int b) {
        x = a;
        y = b;
    }

    void setX(int a) {
        x = a;
    }

    void setY(int b) {
        y = b;
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    void display() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1;
    p1.display();

    Point p2(3, 5);
    p2.display();

    p1.setX(10);
    p1.setY(20);
    p1.display();

    return 0;
}
