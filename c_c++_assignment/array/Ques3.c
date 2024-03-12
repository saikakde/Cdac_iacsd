#include <stdio.h>

int main() {
    int n, num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to count occurrences: ");
    scanf("%d", &num);

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    printf("Number %d occurs %d times in the array.\n", num, count);

    return 0;
}
