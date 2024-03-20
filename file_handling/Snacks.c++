#include <bits/stdc++.h>
#include "Product.h"

using namespace std;
class Snacks : public Product
{
private:
    int price;
    char quality[50];

public:
    void accept(int id, char pname[50], char company[50], char qual[50], int pr)
    {
        Product::accept(id, pname, company);
        strcpy(quality, qual);
        this->price = pr;
    }
    void display()
    {
        Product::display();
        cout << "product quality is: " << quality << endl;
        cout << "product price is: " << price << endl;
    }
    int priceOfProduct()
    {
        return price;
    }
};
void writeFile(char fname[20], Snacks &s)
{
    ofstream out;
    out.open(fname, ios::binary | ios::app);
    out.write((char *)&s, sizeof(Snacks));
    out.close();
};
void readFile(char fname[20])
{
    Snacks s2;
    ifstream in;
    in.open(fname, ios::binary);
    in.read((char *)&s2, sizeof(Snacks));
    while (!in.eof())
    {
        s2.display();
        in.read((char *)&s2, sizeof(Snacks));
    }
    in.close();
}
int main()
{
    int id, price, ch;
    char pname[50], company[50], quality[50];
    char fname[20] = "book.txt";
    Snacks s;

    do
    {
        cout << "enter the choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "enter snacks id: " << endl;
            cin >> id;
            cin.ignore();
            cout << "enter snacks name: " << endl;
            cin.getline(pname, 50);
            // cin.ignore();
            cout << "enter snacks company: " << endl;
            cin.getline(company, 50);
            // cin.ignore();
            cout << "enter snacks quality: " << endl;
            cin.getline(quality, 50);
            // cin.ignore();
            cout << "enter snacks price : " << endl;
            cin >> price;
            s.accept(id, pname, company, quality, price);
            break;
        }
        case 2:
            s.display();
            break;
        case 3:
            writeFile(fname, s);
            break;
        case 4:
            readFile(fname);
            break;
        case 5:
            break;
        default:
            break;
        }
    } while (ch != 5);

    return 0;
}