#include <stdio.h>

int main() {
    int num1, num2;
    char ch;
    
    scanf("%d %d", &num1, &num2);
    scanf(" %c", &ch); // Notice the space before %c

    switch (ch) {
        case '+':
            printf("%d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d", num1 / num2);
            else
                printf("Division by zero error!");
            break;
        default:
            printf("Invalid operator");
            break;
    }

    return 0;
}
