#include <iostream>
using namespace std;
int main()
{
    cout << "enter the size of the array1" << endl;
    int size1, size2, index;
    cin >> size1;
    int arr[size1];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the size of the array2" << endl;
    cin >> size2;
    int arr2[size2];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }
    int arr3[size1 + size2];
    for (int i = 0; i < size2 + size1; i++)
    {
        if (i < size1)
        {
            arr3[i] = arr[i];
        }
        else
        {
            arr3[i] = arr2[i-size1];
        }
    }

    cout<<"merged array is: "<<endl;
    for (int i = 0; i < size2 + size1; i++)
    {
        cout<<arr3[i]<<" ";
    }
}