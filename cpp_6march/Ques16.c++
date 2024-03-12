#include <iostream>
using namespace std;
int main()
{
    cout << "enter the size of the array1" << endl;
    int p, q, index;
    cin >> p >> q;
    int arr[p][q];

    cout << "enter the elements of the 2d array1" << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> arr[i][j];
        }
    }

    int arr2[p][q];
    cout << "enter the elements of the 2d array2" << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            arr[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    cout << "sum of the elements of the 2d array1 and array2 is: " << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
}