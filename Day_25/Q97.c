#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i, j, k;

    printf("Enter the size of first sorted array: ");
    scanf("%d", &n1);

    printf("Enter the elements of first sorted array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of second sorted array: ");
    scanf("%d", &n2);

    printf("Enter the elements of second sorted array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    i = j = k = 0;

    // Merge the arrays
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2
    while (j < n2) {
        merged[k++] = arr2[j++];
    }

    printf("Merged sorted array:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");

    return 0;
}