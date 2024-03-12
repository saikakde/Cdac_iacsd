#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter the numbers");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (b > c)
        {
            printf("a is the greatest and c is the smallest");
        }
        else
        {
            printf("a is the greatest and b is the smallest");
        }
    }
    else
    {
        if (b < c)
        {
            printf("c is the greatest and a is the smallest");
        }
        else
        {
            printf("b is the greatest and a is the smallest");
        }
    }
}