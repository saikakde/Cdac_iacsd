#include <iostream>
using namespace std;

class ComplexNumber {
private:
    float real, imaginary;
public:
    ComplexNumber() {
        real = 0.0;
        imaginary = 0.0;
    }

    ComplexNumber(float r, float i) {
        real = r;
        imaginary = i;
    }

    void setReal(float r) {
        real = r;
    }

    void setImaginary(float i) {
        imaginary = i;
    }

    float getReal() {
        return real;
    }

    float getImaginary() {
        return imaginary;
    }

    void display() {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    ComplexNumber c1;
    c1.display();

    ComplexNumber c2(3.5, 2.8);
    c2.display();

    c1.setReal(1.0);
    c1.setImaginary(5.0);
    c1.display();

    return 0;
}
