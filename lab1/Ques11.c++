#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
};

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // scanf("%d", &n);
        if (isPrime(n)){
            cout<<"is a prime number:";

        }else{
            cout<<"is not a prime number";
        }
    return 0;
}
