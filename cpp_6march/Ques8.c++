#include <iostream>

using namespace std;
int main(){
    cout<<"enter the size of the array "<<endl;
    int size,sum=0;
    cin>>size;
    int arr[size];

    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        sum = sum+arr[i];
    }
    cout<<"sum of the elements of the array is "<<sum<<endl;
}