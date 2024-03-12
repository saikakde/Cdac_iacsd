#include <stdio.h>

int main() {
    char ch;
    int n;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Enter the number of characters to display: ");
    scanf("%d", &n);

    printf("Next %d characters:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%c ", ch + i + 1);
    }
    printf("\n");

    return 0;
}
