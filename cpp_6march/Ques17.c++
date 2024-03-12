#include <iostream>
using namespace std;
int main()
{
    cout << "enter the size of the array1" << endl;
    int p, q, index;
    cin >> p >> q;
    int arr[p][q];
    int arr3[p][q];
    int arr2[p][q];

    cout << "enter the elements of the 2d array1" << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "enter the elements of the 2d array2" << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            arr3[i][j] = 0;
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            for (int k = 0; k < q; k++)
            {
                arr3[i][j] = arr3[i][j] + arr[i][k] * arr2[k][j];
            }
        }
    }
    cout << "product of the elements of the 2d array1 and array2 is: " << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)

        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}