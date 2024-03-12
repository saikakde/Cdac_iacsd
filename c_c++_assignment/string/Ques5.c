#include <stdio.h>

// Function to find the length of a string using array notation
int strlen_array(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to find the length of a string using pointer notation
int strlen_pointer(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Function to copy a string using array notation
void strcpy_array(char destination[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

// Function to copy a string using pointer notation
void strcpy_pointer(char *destination, char *source) {
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}

// Function to concatenate two strings using array notation
void strcat_array(char destination[], char source[]) {
    int i, j;
    for (i = 0; destination[i] != '\0'; i++);
    for (j = 0; source[j] != '\0'; j++) {
        destination[i + j] = source[j];
    }
    destination[i + j] = '\0';
}

// Function to concatenate two strings using pointer notation
void strcat_pointer(char *destination, char *source) {
    while (*destination != '\0') {
        destination++;
    }
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}

// Function to reverse a string using array notation
void strrev_array(char str[]) {
    int length = strlen_array(str);
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to reverse a string using pointer notation
void strrev_pointer(char *str) {
    char *start = str;
    char *end = str;
    while (*end != '\0') {
        end++;
    }
    end--;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";

    // Test strlen functions
    printf("Length of str1 (array notation): %d\n", strlen_array(str1));
    printf("Length of str1 (pointer notation): %d\n", strlen_pointer(str1));

    // Test strcpy functions
    char copy_array[100], copy_pointer[100];
    strcpy_array(copy_array, str1);
    strcpy_pointer(copy_pointer, str1);
    printf("Copied string (array notation): %s\n", copy_array);
    printf("Copied string (pointer notation): %s\n", copy_pointer);

    // Test strcat functions
    strcat_array(str1, str2);
    printf("Concatenated string (array notation): %s\n", str1);
    strcat_pointer(copy_array, str2);
    printf("Concatenated string (pointer notation): %s\n", copy_array);

    // Test strrev functions
    strrev_array(str1);
    printf("Reversed string (array notation): %s\n", str1);
    strrev_pointer(copy_pointer);
    printf("Reversed string (pointer notation): %s\n", copy_pointer);

    return 0;
}
