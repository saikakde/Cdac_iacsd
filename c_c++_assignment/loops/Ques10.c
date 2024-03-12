#include <stdio.h>

int main() {
    // Pattern a)
    printf("Pattern a):\n");
    for (int i = 0; i <= 5; i++) {
        for (int j = 1; j <= i ; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 5-i ; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // Pattern b)
    printf("\nPattern b):\n");
    for (int i = 0; i <= 5; i++) {
        for (int j = 1; j <= 2*i ; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2*(5-i)-1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
