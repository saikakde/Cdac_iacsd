// Shape Hierarchy:
// Problem Statement: Design a hierarchy of shape classes.
// Begin with a base class Shape and then create derived classes like Circle,
//  Rectangle, and Triangle. Each shape should have methods for calculating
// area and perimeter specific to its geometry.
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
    virtual void perimeter() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void area() override {
        cout << "Area of circle: " << 3.14 * radius * radius << endl;
    }

    void perimeter() override {
        cout << "Perimeter of circle: " << 2 * 3.14 * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void area() override {
        cout << "Area of rectangle: " << length * width << endl;
    }

    void perimeter() override {
        cout << "Perimeter of rectangle: " << 2 * (length + width) << endl;
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    void area() override {
        double s = (side1 + side2 + side3) / 2;
        cout << "Area of triangle: " << sqrt(s * (s - side1) * (s - side2) * (s - side3)) << endl;
    }

    void perimeter() override {
        cout << "Perimeter of triangle: " << side1 + side2 + side3 << endl;
    }
};

int main() {
    int choice;
    double radius, length, width, side1, side2, side3;

    do {
        cout << "\nMenu:\n";
        cout << "1. Calculate area and perimeter of circle\n";
        cout << "2. Calculate area and perimeter of rectangle\n";
        cout << "3. Calculate area and perimeter of triangle\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;  // Read the user's choice here

        switch (choice) {
            case 1:
                cout << "Enter radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                circle.area();
                circle.perimeter();
                break;
            case 2:
                cout << "Enter length and width of the rectangle: ";
                cin >> length >> width;
                Rectangle rectangle(length, width);
                rectangle.area();
                rectangle.perimeter();
                break;
            case 3:
                cout << "Enter lengths of three sides of the triangle: ";
                cin >> side1 >> side2 >> side3;
                Triangle triangle(side1, side2, side3);
                triangle.area();
                triangle.perimeter();
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
