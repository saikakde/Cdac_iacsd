#include <stdio.h>
#include <string.h>
using namespace std;
class Book
{
private:
    string name, author;
    int cost;

public:
    // Book(string name,string author,int cost){
    //     this->name = name;
    //     this->author= author;
    //     this->cost = cost;
    // };
    void accept(string n, string a, int c)
    {

        this->name = name;
        this->author = author;
        this->cost = cost;
        cout << "----book created----" << endl;
    }
    void display()
    {
        cout << name << "    " << author << "    " << cost << endl;
    };
    ~Book()
    {
        cout << "destructor" << endl;
    };
};
