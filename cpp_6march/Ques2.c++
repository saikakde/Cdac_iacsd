#include <iostream>

using namespace std;

int main()
{
    char arithmetic_operator;
    cout << "enter the operation to be performed" << endl;
    cin >> arithmetic_operator;

    int initial_num = 0;
    while (arithmetic_operator != '!')
    {
        

        int num;
        switch (arithmetic_operator)
        {
        case '+':
            cin >> num;
            initial_num = initial_num + num ;
            cout << initial_num<<endl;
            break;
        case '-':
            cin >> num;
            initial_num = initial_num - num ;
            cout << initial_num<<endl;
            break;
        case '*':
            cin >> num;
            initial_num = initial_num * num ;
            cout << initial_num<<endl;
            break;
        case '/':
            cin >> num;
            initial_num = initial_num / num ;
            cout << initial_num<<endl;
            break;
        default:
            break;
        }
        cout << "enter the operation to be performed" << endl;
        cin >> arithmetic_operator;
    }
}