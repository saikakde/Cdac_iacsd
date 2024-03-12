#include <iostream>
#include <cstring>
using namespace std;

// Function to concatenate two strings
void stringConcat(char str1[], char str2[]) {
    strcat(str1, str2);
}

// Function to compare two strings
int stringCompare(char str1[], char str2[]) {
    return strcmp(str1, str2);
}

// Function to reverse a string
void stringReverse(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// Function to convert a string to uppercase
void stringToUpper(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char str1[100], str2[100];
    int choice;

    cout << "Enter the first string: ";
    cin.getline(str1, sizeof(str1));

    cout << "Enter the second string: ";
    cin.getline(str2, sizeof(str2));

    cout << "Menu:\n";
    cout << "1. Concatenate strings\n";
    cout << "2. Compare strings\n";
    cout << "3. Reverse a string\n";
    cout << "4. Convert string to uppercase\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            stringConcat(str1, str2);
            cout << "Concatenated string: " << str1 << endl;
            break;
        case 2:
            if (stringCompare(str1, str2) == 0)
                cout << "Strings are equal\n";
            else
                cout << "Strings are not equal\n";
            break;
        case 3:
            stringReverse(str1);
            cout << "Reversed string: " << str1 << endl;
            break;
        case 4:
            stringToUpper(str1);
            cout << "Uppercase string: " << str1 << endl;
            break;
        default:
            cout << "Invalid choice\n";
    }

    return 0;
}
