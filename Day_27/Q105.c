#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int age;
    char course[30];
    float marks;
};

int main() {
    int n, i;

    printf("===== Student Record Management System =====\n\n");

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student stu[n];

    // Input Student Details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &stu[i].rollNo);

        printf("Name: ");
        scanf(" %[^\n]", stu[i].name);

        printf("Age: ");
        scanf("%d", &stu[i].age);

        printf("Course: ");
        scanf(" %[^\n]", stu[i].course);

        printf("Marks: ");
        scanf("%f", &stu[i].marks);
    }

    // Display Student Records
    printf("\n==============================================================\n");
    printf("                  STUDENT RECORDS\n");
    printf("==============================================================\n");

    printf("%-10s %-20s %-5s %-15s %-10s\n",
           "Roll No", "Name", "Age", "Course", "Marks");

    printf("--------------------------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%-10d %-20s %-5d %-15s %.2f\n",
               stu[i].rollNo,
               stu[i].name,
               stu[i].age,
               stu[i].course,
               stu[i].marks);
    }

    return 0;
}