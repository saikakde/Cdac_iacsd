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
    cout << "doubled all the elements of the array : " << endl;
    for (int i = 0; i < size; i++)
    {
            cout << 2*arr[i] << " ";
        
    }
}
