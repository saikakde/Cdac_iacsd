#include <iostream>
using namespace std;

int isEven(int num) {
    return (num % 2 == 0) ? 1 : 0;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int num;
    for(int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        if(isEven(num))
            cout << num << " is even." << endl;
        else
            cout << num << " is odd." << endl;
    }

    return 0;
}
