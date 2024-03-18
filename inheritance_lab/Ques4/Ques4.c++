// Vehicle Inheritance:
// Problem Statement: Develop a class hierarchy for vehicles.
//  Start with a base class Vehicle and create derived classes like Car,
// Motorcycle, and Truck. Each derived class should have unique properties
// like the number of wheels and specific methods like start_engine().
#include <iostream>
#include "Vehicles.h"
using namespace std;

class Car : public Vehicles
{
private:
    int id, cost, wheels;
    string name;

public:
    Car(int id, string name, int cost, int wheels) : Vehicles(id, name, cost)
    {
        this->wheels = wheels;
    };
    void wheelCount()
    {
        cout << "car has " << wheels << " wheels\n";
    }
    void Display()
    {
        Vehicles::Display();
        // cout<<"wheels of car is: "<<
        wheelCount();
    }
    ~Car();
};

class Motorcycle : public Vehicles
{
private:
    int id, cost, wheels;
    string name;

public:
    Motorcycle(int id, string name, int cost, int wheels) : Vehicles(id, name, cost)
    {
        this->wheels = wheels;
    };
    void wheelCount()
    {
        cout << "motorcycle has " << wheels << " wheels\n";
    };
    void Display()
    {
        Vehicles::Display();
        wheelCount();
    }
    ~Motorcycle();
};

class Truck : public Vehicles
{
private:
    int id, cost, wheels;
    string name;

public:
    Truck(int id, string name, int cost, int wheels) : Vehicles(id, name, cost)
    {
        this->wheels = wheels;
    };
    void wheelCount()
    {
        cout << "truck has " << wheels << " wheels\n";
    };
    void Display()
    {
        Vehicles::Display();
        // cout<<"wheels of car is: "<<
        wheelCount();
    }
    ~Truck();
};

int main()
{
    int cost, wheels;
    string name;
    int size;
    cout << "enter the size of vehicles arr: ";
    cin >> size;
    Vehicles *v[size];

    int ch, id = -1;

    do
    {
        cout << "Enter the choice (1: Car, 2: Motorcycle, 3: Truck, 4: Display all, 0: Exit): ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            // Car(int id, string name, int cost, int wheels)
            cout << "Enter Name, Cost, Wheels: ";
            cin >> name >> cost >> wheels;
            ++id;
            v[id] = new Car(id, name, cost, wheels);
            break;
        }
        case 2:
        {
            // Motorcycle(int id, string name, int cost, int wheels)
            cout << "Enter Motorcycle Name, Cost, Wheels: ";
            cin >> name >> cost >> wheels;
            ++id;
            v[id] = new Motorcycle(id, name, cost, wheels);
            break;
        }
        case 3:
        {
            // Truck(int id, string name, int cost, int wheels)
            cout << "Enter Truck Name, Cost, Wheels: ";
            cin  >> name >> cost >> wheels;
            ++id;
            v[id] = new Truck(id, name, cost, wheels);
            break;
        }
        case 4:
            for (int i = 0; i <= id; i++)
            {
                if (typeid(*v[i]) == typeid(Car))
                {
                    Car *c = dynamic_cast<Car *>(v[i]);
                    c->Display();
                    c->wheelCount();
                }
                if (typeid(*v[i]) == typeid(Motorcycle))
                {
                    Motorcycle *c = dynamic_cast<Motorcycle *>(v[i]);
                    c->Display();
                    c->wheelCount();
                }
                if (typeid(*v[i]) == typeid(Truck))
                {
                    Truck *c = dynamic_cast<Truck *>(v[i]);
                    c->Display();
                    c->wheelCount();
                }
            }
        case 0:
            exit;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    } while (id<size);

    return 0;
}