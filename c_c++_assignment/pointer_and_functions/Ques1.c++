#include <iostream>
using namespace std;

void calculateSum(int *arr, int n, int &sumEven, int &sumOdd) {
    sumEven = 0;
    sumOdd = 0;
    
    for(int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0)
            sumEven += *(arr + i);
        else
            sumOdd += *(arr + i);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate memory for the array
    int *arr = new int[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
        cin >> *(arr + i);

    int sumEven, sumOdd;
    calculateSum(arr, n, sumEven, sumOdd);
    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}
