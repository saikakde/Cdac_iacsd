// Geometric Shapes with Polymorphism:
// Problem Statement: Extend the shape hierarchy example by implementing polymorphism. Define a base class Shape with methods to calculate area and perimeter. Then, create derived classes like Circle, Rectangle, and Triangle, each with its own implementation of these methods.
#include <iostream>
#include <cmath> 
using namespace std;
const double Pi =3.14;

class Shape {
public:
    virtual void calculateArea() const = 0; // Pure virtual function for area calculation
    virtual void calculatePerimeter() const = 0; // Pure virtual function for perimeter calculation
};

class Rectangle : public Shape {
private:
    int length, breadth;

public:
    Rectangle(int length, int breadth) : length(length), breadth(breadth) {}

    void calculateArea() const override {
        cout << "Area of rectangle is: " << length * breadth << endl;
    }

    void calculatePerimeter() const override {
        cout << "Perimeter of rectangle is: " << 2 * (length + breadth) << endl;
    }
};

class Circle : public Shape {
private:
    int radius;

public:
    Circle(int radius) : radius(radius) {}

    void calculateArea() const override {
        cout << "Area of circle is: " << Pi * radius * radius << endl;
    }

    void calculatePerimeter() const override {
        cout << "Perimeter of circle is: " << 2 * Pi * radius << endl;
    }
};

class Triangle : public Shape {
private:
    int side1, side2, side3;

public:
    Triangle(int side1, int side2, int side3) : side1(side1), side2(side2), side3(side3) {}

    void calculateArea() const override {
        double s = (side1 + side2 + side3) / 2.0;
        double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        cout << "Area of triangle is: " << area << endl;
    }

    void calculatePerimeter() const override {
        cout << "Perimeter of triangle is: " << (side1 + side2 + side3) << endl;
    }
};

int main() {
    Rectangle r(5, 6);
    r.calculateArea();
    r.calculatePerimeter();
    cout << "-----------\n";

    Circle c(5);
    c.calculateArea();
    c.calculatePerimeter();
    cout << "-----------\n";

    Triangle t(3, 4, 5);
    t.calculateArea();
    t.calculatePerimeter();

    return 0;
}
