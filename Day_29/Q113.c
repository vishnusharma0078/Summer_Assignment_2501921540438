// Menu-Driven Calculator Program in C

#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double num1, num2, result;

    while (1)
    {
        printf("\n===== MENU-DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Square\n");
        printf("7. Square Root\n");
        printf("8. Power\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            if (num2 != 0)
                printf("Result = %.2lf\n", num1 / num2);
            else
                printf("Division by zero is not allowed!\n");
            break;

        case 5:
        {
            int a, b;
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);

            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Modulus by zero is not allowed!\n");
            break;
        }

        case 6:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            printf("Square = %.2lf\n", num1 * num1);
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%lf", &num1);

            if (num1 >= 0)
                printf("Square Root = %.2lf\n", sqrt(num1));
            else
                printf("Square root of a negative number is not possible.\n");
            break;

        case 8:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result = %.2lf\n", pow(num1, num2));
            break;

        case 9:
            printf("Exiting Calculator...\n");
            return 0;

        default:
            printf("Invalid Choice! Please try again.\n");
        }
    }

    return 0;
}