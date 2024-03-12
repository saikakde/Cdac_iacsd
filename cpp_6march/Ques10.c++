#include <iostream>

using namespace std;
int main()
{
    cout << "enter the size of the array" << endl;
    int size;
    cin >> size;
    int arr[size];

    cout << "enter the elemsnts of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "even elements of the array are: " << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << "\nodd elements of the array are: " << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }

    cout << "\nprime elements of the array are: " << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 2)
        {
            cout << arr[i] << " ";
        }
        {
            bool prime = false;
            int num = 2;
            while (num < arr[i])
            {
                if (arr[i] % num == 0)
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
                cout << arr[i] << " ";
            }
        }
    }
}