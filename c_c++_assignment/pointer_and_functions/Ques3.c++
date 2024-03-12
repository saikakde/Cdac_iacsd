#include <iostream>
using namespace std;

int isPrime(int num) {
    if(num <= 1)
        return 0;
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    cout << "First 10 prime numbers: ";
    int count = 0, num = 2;
    while(count < 10) {
        if(isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;

    return 0;
}
