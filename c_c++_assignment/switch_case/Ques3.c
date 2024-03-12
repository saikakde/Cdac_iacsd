#include <stdio.h>

int main() {
    int x, y, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Options Actions\n");
    printf("1. Equality\n");
    printf("2. Less Than\n");
    printf("3. Quotient and Remainder\n");
    printf("4. Range\n");
    printf("5. Swap\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (x == y)
                printf("%d is equal to %d\n", x, y);
            else
                printf("%d is not equal to %d\n", x, y);
            break;
        case 2:
            if (x < y)
                printf("%d is less than %d\n", x, y);
            else
                printf("%d is not less than %d\n", x, y);
            break;
        case 3:
            printf("Quotient: %d, Remainder: %d\n", x / y, x % y);
            break;
        case 4:
            printf("Enter a number: ");
            int num;
            scanf("%d", &num);
            if ((x <= y && num >= x && num <= y) || (x >= y && num >= y && num <= x))
                printf("%d lies between %d and %d\n", num, x, y);
            else
                printf("%d does not lie between %d and %d\n", num, x, y);
            break;
        case 5:
            printf("Before swap: x = %d, y = %d\n", x, y);
            // Swap logic
            x = x + y;
            y = x - y;
            x = x - y;
            printf("After swap: x = %d, y = %d\n", x, y);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
