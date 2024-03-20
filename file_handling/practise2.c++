#include <iostream>
#include <fstream>
#include <cstring>
#include "Book.h"
using namespace std;

void writeBook(const string &filename, const Book &b1)
{
    ofstream obj(filename, ios::binary | ios::app); // open file in append mode
    obj.write(reinterpret_cast<const char *>(&b1), sizeof(Book));
    cout << "-----book get stored in file -----" << endl;
}

void readBook(const string &filename)
{
    ifstream input(filename, ios::binary);
    Book b2;
    // int count = 0;
    while (input.read(reinterpret_cast<char *>(&b2), sizeof(b2)))
    {
        // count++;
        b2.display();
    }
    // cout << "count of books";
}

int main()
{
    int ch, id;
    char name[MAX_NAME_LENGTH], author[MAX_AUTHOR_LENGTH];
    string filename;
    Book b1;

    cout << "1: Add book\n2: Display book\n3: Write book to file\n4: Read from file\n0: Exit" << endl;
    do
    {
        cout << "Enter choice: ";
        cin >> ch;
        cin.ignore(); // Clear the newline character from the buffer

        switch (ch)
        {
        case 1:
            cout << "Enter id: ";
            cin >> id;
            cin.ignore();
            cout << "Enter name: ";
            cin.getline(name, MAX_NAME_LENGTH);
            cout << "Enter author: ";
            cin.getline(author, MAX_AUTHOR_LENGTH);
            b1.accept(id, name, author);
            break;
        case 2:
            b1.display();
            break;
        case 3:
            cout << "Enter file name: ";
            getline(cin, filename);
            writeBook(filename, b1);
            break;
        case 4:
            cout << "Enter file name: ";
            getline(cin, filename);
            readBook(filename);
            break;
        }
    } while (ch != 0);

    return 0;
}
