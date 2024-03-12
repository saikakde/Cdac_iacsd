#include<iostream>

using namespace std;

int main(){
    cout<<"enter the range to find the sum of even numbers"<<endl;
    int range,sum=0;
    cin>>range;
    for(int i=1;i<=range;i++){
        if(i%2==0){
            sum  = sum+i;
        }
    }
    cout<<"the sum of even numbers between 1 to "<<range<<" is "<<sum<<endl;
}