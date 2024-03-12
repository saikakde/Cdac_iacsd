#include <iostream>
using namespace std;

// Recursive function to calculate sum of digits
int sumOfDigits(int n) {
    if (n < 10)
        return n;
    return sumOfDigits(n / 10) + n % 10;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = num;
    while (result >= 10) {
        result = sumOfDigits(result);
    }

    cout << "Sum of digits of " << num << " till single digit: " << result << endl;

    return 0;
}
