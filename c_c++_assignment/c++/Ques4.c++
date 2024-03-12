#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string bname, author;
    int id;
    double price;
public:
    Book() {
        bname = "Unknown";
        author = "Unknown";
        id = 0;
        price = 0.0;
    }

    Book(string bn, string a, int i, double p) {
        bname = bn;
        author = a;
        id = i;
        price = p;
    }

    void setBname(string bn) {
        bname = bn;
    }

    void setAuthor(string a) {
        author = a;
    }

    void setId(int i) {
        id = i;
    }

    void setPrice(double p) {
        price = p;
    }

    string getBname() {
        return bname;
    }

    string getAuthor() {
        return author;
    }

    int getId() {
        return id;
    }

    double getPrice() {
        return price;
    }

    void display() {
        cout << "Book Name: " << bname << endl;
        cout << "Author: " << author << endl;
        cout << "ID: " << id << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book b1;
    b1.display();

    Book b2("The Alchemist", "Paulo Coelho", 101, 15.99);
    b2.display();

    b1.setBname("Harry Potter");
    b1.setAuthor("J.K. Rowling");
    b1.setId(102);
    b1.setPrice(12.99);
    b1.display();

    return 0;
}
