#include <stdio.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
    float price;
};

int main() {
    int n, i;

    printf("===== Library Management System =====\n\n");

    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book book[n];

    // Input Book Details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].bookId);

        printf("Book Title: ");
        scanf(" %[^\n]", book[i].title);

        printf("Author Name: ");
        scanf(" %[^\n]", book[i].author);

        printf("Book Price: ");
        scanf("%f", &book[i].price);
    }

    // Display Book Details
    printf("\n===============================================================\n");
    printf("                    LIBRARY BOOK RECORDS\n");
    printf("===============================================================\n");

    printf("%-10s %-25s %-20s %-10s\n",
           "Book ID", "Title", "Author", "Price");

    printf("--------------------------------------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%-10d %-25s %-20s %.2f\n",
               book[i].bookId,
               book[i].title,
               book[i].author,
               book[i].price);
    }

    return 0;
}