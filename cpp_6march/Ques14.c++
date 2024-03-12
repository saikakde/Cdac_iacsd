// merging the arrays
#include <iostream>
using namespace std;
int main()
{
    cout << "enter the size of the array" << endl;
    int size,index;
    cin >> size;
    int arr[size];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the element to be searched" << endl;
    int element;
    cin >> element;

    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            found = true;
            index = i;
            break;
        }
    }
    if (found == true)
    {
        cout << "element found in the array at index " << index << " " << endl;
    }
}
