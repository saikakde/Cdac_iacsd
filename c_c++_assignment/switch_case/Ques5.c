#include <stdio.h>

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to add two fractions
void addFractions(int num1, int den1, int num2, int den2) {
    int num = (num1 * den2) + (num2 * den1);
    int den = den1 * den2;
    int common = gcd(num, den);
    printf("Result of addition: %d/%d\n", num / common, den / common);
}

// Function to subtract two fractions
void subtractFractions(int num1, int den1, int num2, int den2) {
    int num = (num1 * den2) - (num2 * den1);
    int den = den1 * den2;
    int common = gcd(num, den);
    printf("Result of subtraction: %d/%d\n", num / common, den / common);
}

// Function to multiply two fractions
void multiplyFractions(int num1, int den1, int num2, int den2) {
    int num = num1 * num2;
    int den = den1 * den2;
    int common = gcd(num, den);
    printf("Result of multiplication: %d/%d\n", num / common, den / common);
}

int main() {
    int num1, den1, num2, den2, choice;

    printf("Enter the first fraction (numerator denominator): ");
    scanf("%d %d", &num1, &den1);

    printf("Enter the second fraction (numerator denominator): ");
    scanf("%d %d", &num2, &den2);

    printf("Options:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            addFractions(num1, den1, num2, den2);
            break;
        case 2:
            subtractFractions(num1, den1, num2, den2);
            break;
        case 3:
            multiplyFractions(num1, den1, num2, den2);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
