#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    // int x=20;
    char st[20];
    cin.getline(st,20);

    cout<<st;
    
    char st1[20];
    cin.getline(st1,20);
cout<<st1;

cout<<strcpy(st,st1);

    return 0;
}