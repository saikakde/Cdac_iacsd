#include <iostream>
using namespace std;

// Recursive function to calculate x raised to y
int power(int x, int y) {
    if (y == 0)
        return 1;
    return x * power(x, y - 1);
}

int main() {
    int x, y;
    cout << "Enter x and y for x^y: ";
    cin >> x >> y;

    cout << x << " raised to " << y << " is: " << power(x, y) << endl;

    return 0;
}
