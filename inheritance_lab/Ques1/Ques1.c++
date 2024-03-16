// Animal Hierarchy:
// Problem Statement: Create a hierarchy of animal classes.
// Start with a base class Animal and then create derived classes like Mammal,
//  Bird, and Fish. Each of these derived classes should have specific properties and
// methods related to their respective categories of animals.
#include <iostream>
#include "Animal.h"
#include <string.h>
using namespace std;
class Mammal : public Animal
{
private:
    string feature;

public:
    Mammal(string feature, string type) : Animal(type)
    {

        // cout << "enter the features of mammal:\n";
        this->feature = feature;
    };
    void print()
    {
        cout << "mammals can " << feature<<endl;
    }
    ~Mammal()
    {
        cout << "";
    };
};
class Bird : public Animal
{
private:
    string feature;

public:
    Bird(string feature, string type) : Animal(type)
    {
        this->feature = feature;
    };
    void print()
    {
        cout << "birds can " << feature<<endl;
    }
    ~Bird()
    {
        cout << "";
    };
};
class Fish : public Animal
{
private:
    string feature;

public:
    Fish(string feature, string type) : Animal(type)
    {
        this->feature = feature;
    };
    void print()
    {
        cout << "fish can " << feature<<endl;
    }
    ~Fish()
    {
        cout << "";
    };
};

int main()
{
    string feature, type;
    cout << "Enter the type of animal: ";
    getline(cin, type); // Read type using getline() to capture the entire line

    cout << "Enter the features: ";
    getline(cin, feature); // Read features using getline() to capture the entire line

    Mammal m1(feature, type);
    m1.print();
// ----------------------------------------------
    cout << endl;
    cout << "Enter the type of animal: ";
    getline(cin, type); // Read type using getline() to capture the entire line

    cout << "Enter the features: ";
    getline(cin, feature); // Read features using getline() to capture the entire line

    Bird b1(feature, type);
    b1.print();

    // --------------------------------------------
    cout << endl;
    cout << "Enter the type of animal: ";
    getline(cin, type); // Read type using getline() to capture the entire line

    cout << "Enter the features: ";
    getline(cin, feature); // Read features using getline() to capture the entire line

    Fish f1(feature, type);
    f1.print();

    return 0;
}
