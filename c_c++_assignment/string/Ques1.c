#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isspace(sentence[i])) {
            sentence[i] = '*';
        } else if (isalpha(sentence[i])) {
            if (islower(sentence[i])) {
                sentence[i] = toupper(sentence[i]);
            } else {
                sentence[i] = tolower(sentence[i]);
            }
        } else if (isdigit(sentence[i])) {
            sentence[i] = '?';
        }
    }

    printf("Altered sentence: %s\n", sentence);

    return 0;
}
