#include <stdio.h>

int main() {
    char name[50];
    int roll;
    int marks[5];
    int total = 0;
    float percentage;
    char grade;

    printf("===== Marksheet Generation System =====\n\n");

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("\nEnter marks for 5 subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5.0;

    // Grade Calculation
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Display Marksheet
    printf("\n=====================================\n");
    printf("           STUDENT MARKSHEET\n");
    printf("=====================================\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", roll);

    printf("\nSubject-wise Marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d : %d\n", i + 1, marks[i]);
    }

    printf("\n-------------------------------------\n");
    printf("Total Marks : %d / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("Grade       : %c\n", grade);

    if (grade == 'F')
        printf("Result      : FAIL\n");
    else
        printf("Result      : PASS\n");

    printf("=====================================\n");

    return 0;
}