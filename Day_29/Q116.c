// Inventory Management System in C

#include <stdio.h>

#define MAX 100

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Product p[MAX];
    int count = 0;
    int choice, id, i, found;
    float totalValue;

    while (1)
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Product Quantity\n");
        printf("5. Delete Product\n");
        printf("6. Calculate Total Inventory Value\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (count >= MAX)
            {
                printf("Inventory is Full!\n");
                break;
            }

            printf("Enter Product ID: ");
            scanf("%d", &p[count].id);

            printf("Enter Product Name: ");
            scanf("%s", p[count].name);

            printf("Enter Quantity: ");
            scanf("%d", &p[count].quantity);

            printf("Enter Price: ");
            scanf("%f", &p[count].price);

            count++;
            printf("Product Added Successfully.\n");
            break;

        case 2:
            if (count == 0)
            {
                printf("No Products Available.\n");
            }
            else
            {
                printf("\n-----------------------------------------------------------\n");
                printf("ID\tName\t\tQuantity\tPrice\n");
                printf("-----------------------------------------------------------\n");

                for (i = 0; i < count; i++)
                {
                    printf("%d\t%s\t\t%d\t\t%.2f\n",
                           p[i].id, p[i].name, p[i].quantity, p[i].price);
                }
            }
            break;

        case 3:
            printf("Enter Product ID to Search: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < count; i++)
            {
                if (p[i].id == id)
                {
                    printf("\nProduct Found:\n");
                    printf("ID       : %d\n", p[i].id);
                    printf("Name     : %s\n", p[i].name);
                    printf("Quantity : %d\n", p[i].quantity);
                    printf("Price    : %.2f\n", p[i].price);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Product Not Found!\n");
            break;

        case 4:
            printf("Enter Product ID: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < count; i++)
            {
                if (p[i].id == id)
                {
                    printf("Enter New Quantity: ");
                    scanf("%d", &p[i].quantity);
                    printf("Quantity Updated Successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Product Not Found!\n");
            break;

        case 5:
            printf("Enter Product ID to Delete: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < count; i++)
            {
                if (p[i].id == id)
                {
                    for (int j = i; j < count - 1; j++)
                    {
                        p[j] = p[j + 1];
                    }

                    count--;
                    printf("Product Deleted Successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Product Not Found!\n");
            break;

        case 6:
            totalValue = 0;

            for (i = 0; i < count; i++)
            {
                totalValue += p[i].quantity * p[i].price;
            }

            printf("Total Inventory Value = %.2f\n", totalValue);
            break;

        case 7:
            printf("Exiting Program...\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}