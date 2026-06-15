#include <stdio.h>

int main() {
    int a, b, x, y, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;

    printf("LCM = %d\n", (a * b) / gcd);

    return 0;
}

