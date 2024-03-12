#include <iostream>

using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"already in uppercase"<<endl;
    }
    cout<<"after conversion "<<(char)(ch-32)<<" ";
}