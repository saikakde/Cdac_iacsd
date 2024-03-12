#include <iostream>

using namespace std;
int main()
{
    cout << "enter the range to find the sum of prime numbers" << endl;
    int range, sum = 0;
    cin >> range;
    sum = sum + 2;
    for (int i = 3; i <= range; i++)
    {
        bool prime = false;
        int num = 2;
        while (num < i)
        {
            if (i % num == 0)
            {
                prime = false;
                break;
            }else{
                prime = true;
            }
            num++;
        }
        if (prime == true)
        {
            sum = sum + i;
            cout << "now the sum is" << sum;
        }
    }

    cout << "sum of prime numbers from 1 to " << range << " is " << sum;
}
