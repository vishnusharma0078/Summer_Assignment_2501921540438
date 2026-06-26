#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== Simple Quiz Application =====\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;

    // Question 2
    printf("\n2. Which language is used to write C programs?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;

    // Question 3
    printf("\n3. How many bits are there in one byte?\n");
    printf("1. 4\n2. 8\n3. 16\n4. 32\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;

    // Question 4
    printf("\n4. Which symbol is used to end a statement in C?\n");
    printf("1. .\n2. ,\n3. :\n4. ;\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 4)
        score++;

    // Question 5
    printf("\n5. Which function is used to print output in C?\n");
    printf("1. scanf()\n2. printf()\n3. gets()\n4. puts()\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;

    // Display Result
    printf("\n===== Quiz Completed =====\n");
    printf("Your Score: %d/5\n", score);

    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}