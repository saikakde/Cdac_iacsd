// accept number from x to y and print all the prime numbers
#include <iostream>

using namespace std;
int main()
{
    cout << "enter the range to find the prime numbers" << endl;
    int x, y;
    cin >> x >> y;
    if (x<= 2)
    {
        cout << x << " ";
    }
    for (int i = x; i <= y; i++)
    {
        bool prime = false;
        int num = 2;
        while (num < i)
        {
            if (i % num == 0)
            {
                prime = false;
                break;
            }
            else
            {
                prime = true;
            }
            num++;
        }
        if (prime == true)
        {
            cout << i << " ";
        }
    }
}
