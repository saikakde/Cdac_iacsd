// 1. Create a class Person with data members as name, age, city. Write getters and setters for all the data
// members. Also add the display function. Create Default and Parameterized constructors. Create the
// object of this class in main method and invoke all the methods in that class.

#include <bits/stdc++.h>
using namespace std;
class Person
{
private:
    string name, city;
    int age;

public:
    Person()
    {
        name = city = "xyz";
        age = 18;
    }

    Person(string name, string city, int age)
    {
        this->name = name;
        this->city = city;
        this->age = age;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setCity(string city)
    {
        this->city = city;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    string getName()
    {
        return name;
    }
    string getCity()
    {
        return city;
    }
    int getAge()
    {
        return age;
    }
    void display()
    {
        cout << "\nname: " << getName();
        cout << "\ncity: " << getCity();
        cout << "\nage: " << getAge();
    }
};
int main()
{
    Person p;
    p.display();

    cout << "\n---------------\n";
    Person p1("sai", "pune", 23);
    p1.display();

    return 0;
}