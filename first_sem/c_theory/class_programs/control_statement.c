#include <stdio.h>

int main(){
    int choice, num1, num2;

    printf("----- Welcome to My Calculator -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter first number: ");
        scanf("%d", &num1);

        printf("Enter second number: ");
        scanf("%d", &num2);

        printf("The sum is %d\n", num1 + num2);
    }


    else if(choice == 2){
        printf("Enter first number: ");
        scanf("%d", &num1);

        printf("Enter second number: ");
        scanf("%d", &num2);

        printf("The difference is %d\n", num1 - num2);
    }


    else if(choice == 3){
        printf("Enter first number: ");
        scanf("%d", &num1);

        printf("Enter second number: ");
        scanf("%d", &num2);

        printf("The product is %d\n", num1 * num2);
    }

    else if(choice == 4){
        printf("Enter first number: ");
        scanf("%d", &num1);

        printf("Enter second number: ");
        scanf("%d", &num2);

        printf("The quotient is %d\n", num1 / num2);
    }
    else{
        printf("Invalid choice!\n");
    }

    printf("------END------");

    return 0;
}