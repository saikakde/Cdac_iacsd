// Q1. Write a C Program to find the Maximum and minimum of two numbers without 
// using any loop or condition.

// Q2.Write a Program to sort the Array , First half in Ascending order and
// the Second in Descending order.

// Q3. Write a program to check string is a palindrome.

// Q4. C Program To Check Neon Number.

// [Given a number (num)  we need to check whether it is a Neon Number ( i.e. a number where the sum of digits of the square of the number is equal to the number )
// and return “true” or “false” accordingly.]
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter the number: \n";
    cin >> num;

    int num2 = num * num, sum = 0;
    while (num2 != 0)
    {
        int temp = num2 % 10;
        sum = sum + temp;
        num2 = num2 / 10;
    }
    if (sum == num)
    {
        cout << "neon\n";
    }
    else
    {
        cout << "not neon\n";
    }
    return 0;
}