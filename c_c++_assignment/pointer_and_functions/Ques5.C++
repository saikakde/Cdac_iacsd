#include <iostream>
using namespace std;

// Function to calculate x raised to y
int power(int x, int y) {
    if (y == 0)
        return 1;
    int result = x;
    for (int i = 1; i < y; i++) {
        result *= x;
    }
    return result;
}

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int x, y, n;
    cout << "Enter x and y for x^y: ";
    cin >> x >> y;
    cout << "Enter n for n!: ";
    cin >> n;

    double result = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1)
            result += (double)power(x, i) / factorial(i);
        else
            result -= (double)power(x, i) / factorial(i);
    }

    cout << "Sum of first " << n << " terms of the Taylor series sin(x): " << result << endl;

    return 0;
}
