#include <stdio.h>

int main() {
    float radius, height,surfaceArea, volume, PI = 3.14;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    volume = 3.14 * radius * radius * height;

    printf("Surface Area of the cylinder: %.2f\n", surfaceArea);
    printf("Volume of the cylinder: %.2f\n", volume);

    return 0;
}
