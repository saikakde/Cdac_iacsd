// ascending and descending
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

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "array in ascending order is: " << endl;
    for (int i = 0; i < size; i++)
    {
            cout << arr[i] << " ";
        
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "\narray in descending order is: " << endl;
    for (int i = 0; i < size; i++)
    {
            cout << arr[i] << " ";
        
    }
}