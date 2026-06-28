#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    int age;
    char department[30];
    float salary;
};

int main() {
    int n, i;

    printf("===== Employee Management System =====\n\n");

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    // Input Employee Details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Age: ");
        scanf("%d", &emp[i].age);

        printf("Department: ");
        scanf(" %[^\n]", emp[i].department);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display Employee Details
    printf("\n===============================================\n");
    printf("           EMPLOYEE DETAILS\n");
    printf("===============================================\n");

    printf("%-10s %-20s %-5s %-15s %-10s\n",
           "ID", "Name", "Age", "Department", "Salary");

    printf("---------------------------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%-10d %-20s %-5d %-15s %.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].age,
               emp[i].department,
               emp[i].salary);
    }

    return 0;
}