// Geometric Shapes with Polymorphism:
// Problem Statement: Extend the shape hierarchy example by implementing polymorphism.
//  Define a base class Shape with methods to calculate area and perimeter.
//  Then, create derived classes like Circle, Rectangle, and Triangle, each
//  with its own implementation of these methods.
#include <bits/stdc++.h>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float length, float breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    void calculateArea() const override
    {
        cout << "Area of rectangle is: " << length * breadth << endl;
    }

    void calculatePerimeter() const override
    {
        cout << "Perimeter of rectangle is: " << 2 * (length + breadth) << endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float radius)
    {
        this->radius = radius;
    }

    void calculateArea() const override
    {
        cout << "Area of circle is: " << Pi * radius * radius << endl;
    }

    void calculatePerimeter() const override
    {
        cout << "Perimeter of circle is: " << 2 * Pi * radius << endl;
    }
};

class Triangle : public Shape
{
private:
    float side1, side2, side3;

public:
    Triangle(float side1, float side2, float side3)
    {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }

    void calculateArea() const override
{
    double s = (side1 + side2 + side3) / 2.0;
    double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    cout << "Area of triangle is: " << area << endl;
}


    void calculatePerimeter() const override
    {
        cout << "Perimeter of triangle is: " << (side1 + side2 + side3) << endl;
    }
};

int main()
{
    int ch;

    do
    {
        cout << "Enter the choice (1: Rectangle, 2: Circle, 3: Triangle, 0: Exit): ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            float length, breadth;
            cout << "Enter length and breadth of rectangle: ";
            cin >> length >> breadth;
            Rectangle r(length, breadth);
            r.calculateArea();
            r.calculatePerimeter();
            cout << "-----------\n";
            break;
        }
        case 2:
        {
            float radius;
            cout << "Enter radius of circle: ";
            cin >> radius;
            Circle c(radius);
            c.calculateArea();
            c.calculatePerimeter();
            cout << "-----------\n";
            break;
        }
        case 3:
        {
            float side1, side2, side3;
            cout << "Enter lengths of three sides of triangle: ";
            cin >> side1 >> side2 >> side3;
            Triangle t(side1, side2, side3);
            t.calculateArea();
            t.calculatePerimeter();
            cout << "-----------\n";
            break;
        }
        case 0:
            exit(0);
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    } while (ch != 0);

    return 0;
}
