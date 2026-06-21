#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Count words
    while (str[i] != '\0') {
        if ((str[i] == ' ' || str[i] == '\n') && i > 0 && str[i - 1] != ' ')
            words++;
        i++;
    }

    printf("Number of words = %d\n", words);

    return 0;
}