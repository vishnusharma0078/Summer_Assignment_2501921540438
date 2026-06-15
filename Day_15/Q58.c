#include <stdio.h>

int main() {
    int arr[100], n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Store first element
    temp = arr[0];

    // Shift elements left
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Put first element at last
    arr[n - 1] = temp;

    printf("Array after left rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}