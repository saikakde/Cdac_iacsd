#include <iostream>
#include <string>
#include"b.h"
using namespace std;



class Mammal : public Animal
{
private:
    string feature;
    string habitat;

public:
    Mammal(string type, string feature, string habitat) : Animal(type), feature(feature), habitat(habitat) {}

    void print()
    {
        cout << "Mammals can " << feature << " and live in " << habitat << endl;
    }
};

class Bird : public Animal
{
private:
    string feature;
    string color;

public:
    Bird(string type, string feature, string color) : Animal(type), feature(feature), color(color) {}

    void print()
    {
        cout << "Birds can " << feature << " and are " << color << endl;
    }
};

class Fish : public Animal
{
private:
    string feature;
    string waterType;

public:
    Fish(string type, string feature, string waterType) : Animal(type), feature(feature), waterType(waterType) {}

    void print()
    {
        cout << "Fish can " << feature << " and live in " << waterType << " water" << endl;
    }
};

// #include <iostream>
// #include <string>
// #include "Animal.h"
// using namespace std;

int main()
{
    string feature, type, habitat, color;

    // Create an array of Animal pointers
    Animal *animals[3];

    // Input details for Mammal
    cout << "Enter the type of animal: ";
    getline(cin, type);
    cout << "Enter the features: ";
    getline(cin, feature);
    cout << "Enter habitat: ";
    getline(cin, habitat);

    // Create and store Mammal object in the array
    animals[0] = new Mammal(feature, type, habitat);

    // Input details for Bird
    cout << "Enter the type of animal: ";
    getline(cin, type);
    cout << "Enter the features: ";
    getline(cin, feature);
    cout << "Enter color: ";
    getline(cin, color);

    // Create and store Bird object in the array
    animals[1] = new Bird(feature, type, color);

    // Input details for Fish
    cout << "Enter the type of animal: ";
    getline(cin, type);
    cout << "Enter the features: ";
    getline(cin, feature);

    // // Create and store Fish object in the array
    // animals[2] = new Fish(feature, type);

    // // Display all animals in the array
    // cout << "\nDisplaying all animals:\n";
    // for (int i = 0; i < 3; ++i)
    // {
    //     cout << "Animal " << i + 1 << ": ";
    //     // animals[i].print();
    //     cout << endl;
    // }

    // Free memory allocated to objects
    for (int i = 0; i < 3; ++i)
    {
        delete animals[i];
    }

    return 0;
}
