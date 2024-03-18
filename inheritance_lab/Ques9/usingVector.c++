#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Shape
{
public:
    virtual float area()
    {
        cout << "";
    };
    virtual float perimeter()
    {
        cout << "";
    };

    virtual string display()
    {
        cout << "";
    }
    virtual ~Shape() {}
};

class Circle : virtual public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    virtual float area() override
    {
        // cout << "Area of circle: " << 3.14 * radius * radius << endl;
        return 3.14 * radius * radius;
    }

    virtual float perimeter() override
    {
        // cout << "Perimeter of circle: " << 2 * 3.14 * radius << endl;
        return 2 * 3.14 * radius;
    }

    virtual string display()
    {
        return "circle";
    }
};

class Rectangle : virtual public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    virtual float area() override
    {
        // cout << "Area of rectangle: " << length * width << endl;
        return length * width;
    }

    virtual float perimeter() override
    {
        // cout << "Perimeter of rectangle: " << 2 * (length + width) << endl;
        return 2 * (length + width);
    }
    virtual string display()
    {
        return "rectangle";
    }
};

class Triangle : public Shape
{
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    float area() override
    {
        double s = (side1 + side2 + side3) / 2;
        // cout << "Area of triangle: " << sqrt(s * (s - side1) * (s - side2) * (s - side3)) << endl;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    float perimeter() override
    {
        // cout << "Perimeter of triangle: " << side1 + side2 + side3 << endl;
        return side1 + side2 + side3;
    }
    virtual string display()
    {
        return "triangle";
    }
};


int main()
{
    int choice;
    double radius, length, width, side1, side2, side3;
    vector<Shape*> v;

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
            Circle *circle=new Circle(radius);
            v.push_back(circle);
            circle->area();
            circle->perimeter();
            break;
        }
        case 2:
        {

            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            Rectangle *rectangle= new Rectangle(length, width);
            v.push_back(rectangle);

            rectangle->area();
            rectangle->perimeter();
            break;
        }
        case 3:
        {

            cout << "Enter length, width and radius of the diamond: ";
            cin >> side1 >> side2>>side2;
            Triangle *t = new Triangle(side1 ,side2,side2);
            v.push_back(t);

            t->area();
            t->perimeter();
            break;
        }

        case 4:
        {
            for (int i = 0; i < v.size(); i++)
            {
                for (int j = i + 1; j < v.size(); j++)
                {
                    if (v[i]->area() > v[j]->area())
                    {
                        Shape *temp;
                        temp = v[i];
                        v[i] = v[j];
                        v[j] = temp;
                    }
                }
            }
            break;
        }
        case 5:
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i]->display() << " : " << v[i]->area() << " ";
            }
            break;
        }

        case 6:
        {

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