#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // Consume newline

    char strings[n][MAX_LENGTH];
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(strings[i], MAX_LENGTH, stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0'; // Remove newline character
    }

    int longest_length = 0;
    char longest_string[MAX_LENGTH];

    for (int i = 0; i < n; i++) {
        if (strlen(strings[i]) > longest_length) {
            longest_length = strlen(strings[i]);
            strcpy(longest_string, strings[i]);
        }
    }

    printf("Longest string: %s\n", longest_string);

    return 0;
}
