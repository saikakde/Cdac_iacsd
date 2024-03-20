#include <bits/stdc++.h>
using namespace std;

int maxOcc(int *arr, int size)
{

    int max = 0, index = 0, countsArr[size];
    // unordered_map<int, int> mp;
    // for (int i = 0; i < size; i++)
    // {
    //     mp[arr[i]]++;
    // }
    // int maxCount = 0;
    // int maxElement = 0;

    // // Find the element with the maximum occurrence
    // for (const auto &pair : mp)
    // {
    //     if (pair.second > maxCount)
    //     {
    //         maxCount = pair.second;
    //         maxElement = pair.first;
    //     }
    // }
    // return maxElement;

    for(int i=0;i<size;i++){
    int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        countsArr[i]=count;
        if(max<countsArr[i]){
            // max = count;
            index = i;
        }

    }
    return arr[index];
}
int main()
{
    int size = 5;
    cin >> size;
    int *ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }

    cout << "max occuring element is:" << maxOcc(ptr, size);
}