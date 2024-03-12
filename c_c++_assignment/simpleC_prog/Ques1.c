#include <stdio.h>

void main()
{
    float radius, circumference, area;
    scanf("%.2f", &radius);

    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;
    printf("circumference of the circle is %f", circumference);
    printf("area of the circle is %f", area);
}