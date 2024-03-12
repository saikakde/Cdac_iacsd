#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string city;
public:
    Person() {
        name = "Unknown";
        age = 0;
        city = "Unknown";
    }

    Person(string n, int a, string c) {
        name = n;
        age = a;
        city = c;
    }

    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setCity(string c) {
        city = c;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getCity() {
        return city;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "City: " << city << endl;
    }
};

int main() {
    Person p1;
    p1.display();

    Person p2("John", 25, "New York");
    p2.display();

    p1.setName("Alice");
    p1.setAge(30);
    p1.setCity("London");
    p1.display();

    return 0;
}
