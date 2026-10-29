#include <stdio.h>

int main(){

    int num1;
    float num2, sum,diff,multi,divi;

    printf("Welcome to addition program\n");

    printf("Enter the first number\n");
    scanf("%d", &num1);

    printf("Enter the second number\n");
    scanf("%f", &num2);

    sum = num1 + num2;
    diff = num1- num2;
    multi = num1 * num2;
    divi = num1 / num2;

    printf("The sum of %d and %f is %f\n", num1, num2, sum);
    printf("The difference of%d and %f is %f\n", num1, num2, diff);
    printf("the product of %d and %f is %f\n", num1, num2, multi);
    printf("The quotient of %d and %f is %f\n", num1, num2, divi);

    return 0;
}