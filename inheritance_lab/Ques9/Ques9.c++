// Shape Sorting with Interfaces:
// Problem Statement: Implement a shape sorting program.
// Define a base class Shape with properties like area and perimeter.
//  Create derived classes like Circle, Rectangle, and Triangle.
//   Implement an interface Sortable with a method to compare shapes by area.
//    Use this interface to sort a list of shapes.

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

    float calculateArea() const override
    {
        // cout << "Area of rectangle is: " << length * breadth << endl;
        return length * breadth;
    }

    float calculatePerimeter() const override
    {
        // cout << "Perimeter of rectangle is: " << 2 * (length + breadth) << endl;
        return 2 * (length + breadth);
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

    float calculateArea() const override
    {
        // cout << "Area of circle is: " << Pi * radius * radius << endl;
        return Pi * radius * radius;
    }

    float calculatePerimeter() const override
    {
        // cout << "Perimeter of circle is: " << 2 * Pi * radius << endl;
        return 2 * Pi * radius;
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

    float calculateArea() const override
    {
        double s = (side1 + side2 + side3) / 2.0;
        double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
        // cout << "Area of triangle is: " << area << endl;
        return area;
    }

    float calculatePerimeter() const override
    {
        // cout << "Perimeter of triangle is: " << (side1 + side2 + side3) << endl;
        return side1 + side2 + side3;
    }
};

// sortable interface
class Sortable
{
public:
    virtual bool compare(const Shape *shape1, const Shape *shape2) const = 0;
    virtual ~Sortable() {}
};

// function to implement sortable interface
void sortShapes(vector<Shape *> &shapes, const Sortable &sorter)
{
    sort(shapes.begin(), shapes.end(), [&sorter](const Shape *shape1, const Shape *shape2)
         { return sorter.compare(shape1, shape2); });
}

class AreaSortable : public Sortable
{
public:
    bool compare(const Shape *shape1, const Shape *shape2) const override
    {
        return shape1->calculateArea() < shape2->calculateArea();
    }
};

// int main()
// {
//     vector<Shape *> shapes;

//     shapes.push_back(new Circle(5));
//     shapes.push_back(new Rectangle(3, 4));
//     shapes.push_back(new Triangle(3, 4, 5));

//     AreaSortable areaSorter;
//     sortShapes(shapes, areaSorter);

//     cout << "Sorted shapes by area:" << endl;
//     for (const auto &shape : shapes)
//     {
//         cout << shape->calculateArea() << endl;
//     }

//     for (auto &shape : shapes)
//     {
//         delete shape;
//     }

//     return 0;
// }

int main()
{
    int choice;
    double radius, length, width, side1, side2, side3;
    vector<Shape *> v;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Calculate area and perimeter of circle\n";
        cout << "2. Calculate area and perimeter of rectangle\n";
        cout << "3. Calculate area and perimeter of triangle\n";
        cout << "4. sorting\n";
        cout << "5. display vector\n";
        cout << "6. exit\n";

        cout << "Enter your choice: ";
        cin >> choice; // Read the user's choice here

        switch (choice)
        {
        case 1:
        {

            cout << "Enter radius of the circle: ";
            cin >> radius;
            Circle *circle = new Circle(radius);
            v.push_back(circle);
            // circle->calculateArea();
            // circle->calculatePerimeter();
            break;
        }
        case 2:
        {

            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            Rectangle *rectangle = new Rectangle(length, width);
            v.push_back(rectangle);

            // rectangle->calculateArea();
            // rectangle->calculatePerimeter();
            break;
        }
        case 3:
        {

            cout << "Enter side1, side2, side3 of triangle: ";
            cin >> side1 >> side2 >> side2;
            Triangle *t = new Triangle(side1, side2, side2);
            v.push_back(t);

            // t->calculateArea();
            // t->calculatePerimeter();
            break;
        }

        case 4:
        {
            AreaSortable areaSorter;
            sortShapes(v, areaSorter);

            cout << "Sorted shapes by area:" << endl;
            for (const auto &shape : v)
            {
                cout << shape->calculateArea() << endl;
            }

            break;
        }
            case 5:
            {
                for (int i = 0; i < v.size(); i++)
                {
                    cout << v[i]->calculateArea() << " ";
                }
                break;
            }

        case 6:
        {
            for (auto &shape : v)
            {
                delete shape;
            }

            cout << "Exiting the program.\n";
            break;
        }
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 6);

    return 0;
}