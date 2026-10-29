#include<stdio.h>
int main(){
    int choice=1,firstnumber,secondnumber;
    do{
    printf("----welcome to my calculator----\n");
    printf("1.addition\n");
    printf("2.substracion\n");
    printf("3.multication\n");
    printf("4.division\n");
    printf("5.exit\n");
    printf("enter ur choice:");
    scanf("%d",&choice);

    if (choice==1){
        //addition
    printf("enter the first number:");
    scanf("%d",&firstnumber);
    printf("enter the second number:");
    scanf("%d",&secondnumber);
    int addition = firstnumber + secondnumber;
    printf("the sum is : %d\n",addition);
    }

    if(choice==2){
        printf("enter the first number:");
    scanf("%d",&firstnumber);
    printf("enter the second number:");
    scanf("%d",&secondnumber);
    int substraction = firstnumber - secondnumber;
    printf("the sum is : %d\n",substraction);
    }

    if(choice==3){
        printf("enter the first number:");
    scanf("%d",&firstnumber);
    printf("enter the second number:");
    scanf("%d",&secondnumber);
    int multiplication = firstnumber * secondnumber;
    printf("the sum is : %d\n",multiplication);
    }
    
    if (choice==4){
    printf("enter the first number:");
    scanf("%d",&firstnumber);
    printf("enter the second number:");
    scanf("%d",&secondnumber);
    int division = firstnumber / secondnumber;
    printf("the sum is : %d\n",division);
    }
    }while(choice<=4);

    printf("----end----\n");

    return 0;
}