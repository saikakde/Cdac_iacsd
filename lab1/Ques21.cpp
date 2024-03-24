#include <stdio.h>

int main()
{
    int num1, num2;
    char ch;

    printf("enter num1 and num2: ");
    scanf("%d %d", &num1, &num2);
    printf("enter choice: ");

    scanf(" %c", &ch); // Notice the space before %c

    switch (ch)
    {
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
