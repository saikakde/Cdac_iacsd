#include <stdio.h>
#include <string.h>
#include <ctype.h>

void stringOperations(char str1[], char str2[], int choice) {
    switch (choice) {
        case 1:
            printf("Length of str1: %zu\n", strlen(str1));
            break;
        case 2:
            strcpy(str1, str2);
            printf("Copy successful. str1 is now: %s\n", str1);
            break;
        case 3:
            strcat(str1, str2);
            printf("Concatenation successful. str1 is now: %s\n", str1);
            break;
        case 4:
            printf("Comparison result: %d\n", strcmp(str1, str2));
            break;
        case 5:
            strrev(str1);
            printf("Reversed str1: %s\n", str1);
            break;
        case 6:
            for (int i = 0; str1[i] != '\0'; i++) {
                putchar(toupper(str1[i]));
            }
            printf("\n");
            break;
        case 7:
            for (int i = 0; str1[i] != '\0'; i++) {
                putchar(tolower(str1[i]));
            }
            printf("\n");
            break;
        case 8:
            for (int i = 0; str1[i] != '\0'; i++) {
                if (isupper(str1[i])) {
                    printf("Uppercase ");
                } else if (islower(str1[i])) {
                    printf("Lowercase ");
                } else {
                    printf("Not an alphabet ");
                }
            }
            printf("\n");
            break;
        default:
            printf("Invalid choice\n");
    }
}

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove the newline character

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove the newline character

    printf("Menu:\n");
    printf("1. Length\n");
    printf("2. Copy\n");
    printf("3. Concatenation\n");
    printf("4. Compare\n");
    printf("5. Reverse\n");
    printf("6. Uppercase\n");
    printf("7. Lowercase\n");
    printf("8. Check case\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    stringOperations(str1, str2, choice);

    return 0;
}
