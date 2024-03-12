#include <iostream>

using namespace std;
int main()
{
    cout << "enter the size of the array " << endl;
    int size;
    cin >> size;
    int arr[size];

    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "elements greater than 50 are: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 50)
        {

            cout << arr[i]<<" ";
        }
    }
}