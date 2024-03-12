#include <stdio.h>

#define MAX_BOOKS 100

// Structure for library book
struct library_book {
    int id;
    char title[80];
    char publisher[20];
    int code;
    union {
        int no_of_copies;
        char month[10];
        int edition;
    } info;
    int cost;
};

// Function prototypes for book operations
void accept_books(struct library_book books[], int n);
void display_books(struct library_book books[], int n);

int main() {
    struct library_book books[MAX_BOOKS];
    int n;

    printf("Enter number of books: ");
    scanf("%d", &n);

    accept_books(books, n);
    display_books(books, n);

    return 0;
}

// Function to accept details of n books
void accept_books(struct library_book books[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &books[i].id);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Publisher: ");
        scanf("%s", books[i].publisher);
        printf("Code (1-Text book, 2-Magazine, 3-Reference book): ");
        scanf("%d", &books[i].code);
        switch (books[i].code) {
            case 1:
                printf("Number of copies: ");
                scanf("%d", &books[i].info.no_of_copies);
                break;
            case 2:
                printf("Issue month: ");
                scanf("%s", books[i].info.month);
                break;
            case 3:
                printf("Edition number: ");
                scanf("%d", &books[i].info.edition);
                break;
            default:
                printf("Invalid code.\n");
        }
        printf("Cost: ");
        scanf("%d", &books[i].cost);
    }
}

// Function to display details of n books
void display_books(struct library_book books[], int n) {
    printf("Book details:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\nTitle: %s\nPublisher: %s\nCode: %d\n", books[i].id, books[i].title, books[i].publisher, books[i].code);
        switch (books[i].code) {
            case 1:
                printf("Number of copies: %d\n", books[i].info.no_of_copies);
                break;
            case 2:
                printf("Issue month: %s\n", books[i].info.month);
                break;
            case 3:
                printf("Edition number: %d\n", books[i].info.edition);
                break;
        }
        printf("Cost: %d\n", books[i].cost);
    }
}
