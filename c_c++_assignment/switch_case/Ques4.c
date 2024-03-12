#include <stdio.h>
#include <math.h>

int main()
{
    float radius;
    const float pi = 3.14;
    int choice;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Options Actions\n");
    printf("1. Area of Circle\n");
    printf("2. Circumference of Circle\n");
    printf("3. Volume of Sphere\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Area of the circle: %.2f\n", pi * radius * radius);
        break;
    case 2:
        printf("Circumference of the circle: %.2f\n", 2 * pi * radius);
        break;
    case 3:
        printf("Volume of the sphere: %.2f\n", (4.0 / 3.0) * pi * radius * radius * radius);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}
