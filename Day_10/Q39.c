// Day 10 - Question 2
#include <stdio.h>

int main() {
    return 0;
}
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print ascending numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print descending numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}