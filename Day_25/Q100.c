#include <stdio.h>
#include <string.h>

int main() {
    char str[200], words[50][50], temp[50];
    int i = 0, j = 0, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    // Split sentence into words
    char *token = strtok(str, " ");
    while (token != NULL) {
        strcpy(words[count], token);
        count++;
        token = strtok(NULL, " ");
    }

    // Sort words by length
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for (i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }

    printf("\n");

    return 0;
}