#include <bits/stdc++.h>
using namespace std;

const double Pi =3.14;

class Shape {
public:
    virtual void calculateArea() const = 0; // Pure virtual function for area calculation
    virtual void calculatePerimeter() const = 0; // Pure virtual function for perimeter calculation
};