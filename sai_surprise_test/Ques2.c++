#include <iostream>
using namespace std;

int main()

{
    cout << "enter the size of the arr:\n";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "original arr:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nafter ascending and descending\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {

            int temp;
            while (arr[i] > arr[j] && j < size)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j++;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        while (i < size / 2)
        {
            cout << arr[i] << " ";
            i++;
        }
        while (size != i)
        {

            cout << arr[size-1] << " ";
            size--;
        }
    }

    return 0;
}