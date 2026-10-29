//to demo scanf()
#include<stdio.h>
int main(){
    int num1,num2,sum,diff,multi,divi;
    printf("----------------------------welcome to addition program----------------------------\n");

    printf("enter the first number\n");
    scanf("%d",&num1);

    printf("enter second number\n");
    scanf("%d",&num2);

    sum = num1 + num2;
    diff = num1 - num2;
    multi = num1 * num2;
    divi = num1  / num2;
    
    printf("the sum of %d and %d is %d\n",num1,num2,sum);
    printf("the difference between %d and is %d\n",num1,num2,diff);
    printf("the product of %d and %d is %d\n", num1,num2,multi);
    printf("the quotient of %d and %d is %d\n",num1,num2,divi);

    printf("----------------------------------------------------------------------------------\n");

    return 0;
}