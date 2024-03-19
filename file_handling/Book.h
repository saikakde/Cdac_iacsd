#include<bits/stdc++.h>
using namespace std;
const int MAX_NAME_LENGTH = 50;
const int MAX_AUTHOR_LENGTH = 50;
class Book {
private:
    int id;
    char name[MAX_NAME_LENGTH];
    char author[MAX_AUTHOR_LENGTH];

public:
    void accept(int id, const char* name, const char* author) {
        this->id = id;
        strcpy(this->name, name);
        strcpy(this->author, author);
        cout << "----book created----" << endl;
    }

    void display() {
        cout << id << "    " << name << "    " << author << "    " << endl;
    }

    // Serialization function to write object to file
    void writeToFile(ofstream& file) const {
        file.write(reinterpret_cast<const char*>(this), sizeof(*this));
    }

    // Deserialization function to read object from file
    void readFromFile(ifstream& file) {
        file.read(reinterpret_cast<char*>(this), sizeof(*this));
    }
};
