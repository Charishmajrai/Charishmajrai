#include <stdio.h>

int main()
{
    int roll_no, total;
    int mark1, mark2, mark3, mark4, mark5;
    float average, percentage;

    printf("Enter roll number: ");
    scanf("%d", &roll_no);

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5);

    total = mark1 + mark2 + mark3 + mark4 + mark5;
    average = total / 5;
    percentage = (total / 500.0) * 100;

    printf("\n----- STUDENT MARKSHEET -----");
    printf("\nRoll Number : %d", roll_no);
    printf("\nSubject 1 : %d", mark1);
    printf("\nSubject 2 : %d", mark2);
    printf("\nSubject 3 : %d", mark3);
    printf("\nSubject 4 : %d", mark4);
    printf("\nSubject 5 : %d", mark5);
    printf("\nTotal Marks : %d", total);
    printf("\nAverage Marks : %.2f", average);
    printf("\nPercentage : %.2f", percentage);

    return 0;
} 