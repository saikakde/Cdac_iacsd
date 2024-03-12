#include <stdio.h>

int main() {
    int marks1, marks2, marks3, marks4, marks5;
    int totalMarks;
    float percentage;

    printf("Enter marks of 5 subjects (out of 100):\n");
    printf("Enter marks of subject 1: ");
    scanf("%d", &marks1);
    printf("Enter marks of subject 2: ");
    scanf("%d", &marks2);
    printf("Enter marks of subject 3: ");
    scanf("%d", &marks3);
    printf("Enter marks of subject 4: ");
    scanf("%d", &marks4);
    printf("Enter marks of subject 5: ");
    scanf("%d", &marks5);

    totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;

    percentage = ((float)totalMarks / 500) * 100;

    printf("Total marks: %d/500\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
