#include <stdio.h>

#define PI 3.14159

int main() {
    char choice;
    float radius, length, width, base, height;
    float area;

    do {
        printf("\nMenu:\n");
        printf("a) Compute area of circle\n");
        printf("b) Compute area of rectangle\n");
        printf("c) Compute area of triangle\n");
        printf("d) Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                printf("Enter radius of the circle: ");
                scanf("%f", &radius);
                area = PI * radius * radius;
                printf("Area of the circle: %.2f\n", area);
                break;
            case 'b':
                printf("Enter length and width of the rectangle: ");
                scanf("%f %f", &length, &width);
                area = length * width;
                printf("Area of the rectangle: %.2f\n", area);
                break;
            case 'c':
                printf("Enter base and height of the triangle: ");
                scanf("%f %f", &base, &height);
                area = 0.5 * base * height;
                printf("Area of the triangle: %.2f\n", area);
                break;
            case 'd':
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 'd');

    return 0;
}
