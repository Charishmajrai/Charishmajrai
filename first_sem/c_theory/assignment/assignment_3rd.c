#include <stdio.h>

int main()
{
    int choice;
    int firstnumber, secondnumber;
    int sum;

    printf("Welcome to my calculator\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter the first number: ");
            scanf("%d", &firstnumber);

            printf("Enter the second number: ");
            scanf("%d", &secondnumber);

            sum = firstnumber + secondnumber;
            printf("The sum is = %d", sum);
            break;

        case 2:
            printf("Enter the first number: ");
            scanf("%d", &firstnumber);

            printf("Enter the second number: ");
            scanf("%d", &secondnumber);

            sum = firstnumber - secondnumber;
            printf("The difference is = %d", sum);
            break;

        case 3:
            printf("Enter the first number: ");
            scanf("%d", &firstnumber);

            printf("Enter the second number: ");
            scanf("%d", &secondnumber);

            sum = firstnumber * secondnumber;
            printf("The product is = %d", sum);
            break;

        case 4:
            printf("Enter the first number: ");
            scanf("%d", &firstnumber);

            printf("Enter the second number: ");
            scanf("%d", &secondnumber);

            if(secondnumber != 0)
            {
                sum = firstnumber / secondnumber;
                printf("The division is = %d", sum);
            }
            else
            {
                printf("Division by zero is not possible");
            }
            break;

        case 5:
            printf("Enter the first number: ");
            scanf("%d", &firstnumber);

            printf("Enter the second number: ");
            scanf("%d", &secondnumber);

            sum = firstnumber % secondnumber;
            printf("The modulus is = %d", sum);
            break;

        default:
            printf("Invalid choice");
    }
    return 0;
}