// Menu-Driven Array Operations System in C

#include <stdio.h>

#define MAX 100

int main()
{
    int arr[MAX], n, choice, i, pos, value, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    while(1)
    {
        printf("\n===== ARRAY OPERATIONS MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Find Maximum Element\n");
        printf("6. Find Minimum Element\n");
        printf("7. Calculate Sum\n");
        printf("8. Calculate Average\n");
        printf("9. Sort Array (Ascending)\n");
        printf("10. Reverse Array\n");
        printf("11. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                printf("Enter position (1-%d): ", n + 1);
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &value);

                if(pos < 1 || pos > n + 1)
                {
                    printf("Invalid Position!\n");
                }
                else
                {
                    for(i = n; i >= pos; i--)
                        arr[i] = arr[i - 1];

                    arr[pos - 1] = value;
                    n++;
                    printf("Element inserted successfully.\n");
                }
                break;

            case 3:
                printf("Enter position to delete (1-%d): ", n);
                scanf("%d", &pos);

                if(pos < 1 || pos > n)
                {
                    printf("Invalid Position!\n");
                }
                else
                {
                    for(i = pos - 1; i < n - 1; i++)
                        arr[i] = arr[i + 1];

                    n--;
                    printf("Element deleted successfully.\n");
                }
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &value);

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == value)
                    {
                        printf("Element found at position %d\n", i + 1);
                        break;
                    }
                }

                if(i == n)
                    printf("Element not found.\n");
                break;

            case 5:
                temp = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > temp)
                        temp = arr[i];
                }
                printf("Maximum Element = %d\n", temp);
                break;

            case 6:
                temp = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] < temp)
                        temp = arr[i];
                }
                printf("Minimum Element = %d\n", temp);
                break;

            case 7:
            {
                int sum = 0;
                for(i = 0; i < n; i++)
                    sum += arr[i];

                printf("Sum = %d\n", sum);
                break;
            }

            case 8:
            {
                int sum = 0;
                float avg;

                for(i = 0; i < n; i++)
                    sum += arr[i];

                avg = (float)sum / n;
                printf("Average = %.2f\n", avg);
                break;
            }

            case 9:
                for(i = 0; i < n - 1; i++)
                {
                    for(int j = 0; j < n - i - 1; j++)
                    {
                        if(arr[j] > arr[j + 1])
                        {
                            temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                printf("Array sorted successfully.\n");
                break;

            case 10:
                for(i = 0; i < n / 2; i++)
                {
                    temp = arr[i];
                    arr[i] = arr[n - i - 1];
                    arr[n - i - 1] = temp;
                }
                printf("Array reversed successfully.\n");
                break;

            case 11:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}