#include <iostream>
using namespace std;

// Recursive function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "First " << n << " Fibonacci numbers: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n - 1) << endl;

    return 0;
}
