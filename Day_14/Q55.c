#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("Need at least 2 elements\n");
        return 0;
    }

    largest = second = -2147483648; // minimum int value

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == -2147483648)
        printf("No second largest element\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}