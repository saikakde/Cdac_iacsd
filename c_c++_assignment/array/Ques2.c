#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, key;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            break;
        }
    }

    if (found) {
        printf("Key %d is present in the array.\n", key);
    } else {
        printf("Key %d is not present in the array.\n", key);
    }

    return 0;
}
