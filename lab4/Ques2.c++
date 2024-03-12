// 2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the
// object of this class in main method and invoke all the methods in that class.
#include <bits/stdc++.h>
using namespace std;
class Date
{
private:
    int dd, mm, yy;

public:
    Date()
    {
        dd = mm = 1;
        yy = 1999;
    }

    Date(int dd, int mm, int yy)
    {
        this->dd = dd;
        this->mm = mm;
        this->yy = yy;
    }
    void setDd(int dd)
    {
        this->dd = dd;
    }
    void setMm(int mm)
    {
        this->mm = mm;
    }
    void setYy(int yy)
    {
        this->yy = yy;
    }
    int getDd()
    {
        return dd;
    }
    int getMm()
    {
        return mm;
    }
    int getYy()
    {
        return yy;
    }
    void display()
    {
        cout << "date: " << getDd() << "/" << getMm() << "/" << getYy() << endl;
    }
};
int main()
{
        cout << "\n-------default constr--------\n";
    Date p;
    p.display();

    cout << "\n------parameterized constr---------\n";
    Date p1(12, 3, 2024);
    p1.display();

    cout << "\n-------getter setter --------\n";
    Date d2;
    d2.setDd(5);
    d2.setMm(5);
    d2.setYy(2015);

    d2.display();
    return 0;
}