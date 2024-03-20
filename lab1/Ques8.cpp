#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter the angles of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c != 180)
    {
        printf("invalid traingle");
    }
    else
    {
        printf("valid traingle");
    }
}