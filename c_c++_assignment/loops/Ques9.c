#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Pattern a):\n");
    // Pattern a) Asterisks
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nPattern b):\n");
    // Pattern b) Numbers
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\nPattern c):\n");
    // Pattern c) Alphabets
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
