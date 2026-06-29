// Menu-Driven String Operations System in C

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[100];
    int choice;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    while (1)
    {
        printf("\n===== MENU =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Enter New String\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear input buffer

        switch (choice)
        {
        case 1:
            printf("Length of string = %lu\n", strlen(str1));
            break;

        case 2:
            strcpy(temp, str1);
            printf("Copied string = %s\n", temp);
            break;

        case 3:
            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';

            strcpy(temp, str1);
            strcat(temp, str2);

            printf("Concatenated string = %s\n", temp);
            break;

        case 4:
            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';

            if (strcmp(str1, str2) == 0)
                printf("Strings are Equal.\n");
            else
                printf("Strings are Not Equal.\n");
            break;

        case 5:
        {
            strcpy(temp, str1);
            int len = strlen(temp);

            for (int i = 0; i < len / 2; i++)
            {
                char ch = temp[i];
                temp[i] = temp[len - i - 1];
                temp[len - i - 1] = ch;
            }

            printf("Reversed string = %s\n", temp);
            break;
        }

        case 6:
            strcpy(temp, str1);

            for (int i = 0; temp[i] != '\0'; i++)
            {
                if (temp[i] >= 'a' && temp[i] <= 'z')
                    temp[i] = temp[i] - 32;
            }

            printf("Uppercase string = %s\n", temp);
            break;

        case 7:
            strcpy(temp, str1);

            for (int i = 0; temp[i] != '\0'; i++)
            {
                if (temp[i] >= 'A' && temp[i] <= 'Z')
                    temp[i] = temp[i] + 32;
            }

            printf("Lowercase string = %s\n", temp);
            break;

        case 8:
            printf("Enter new string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';
            break;

        case 9:
            printf("Exiting Program...\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}