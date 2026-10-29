#include<stdio.h>
int main(){
    int choice , firstnumber , secondnumber , thirdnumber;
    int largestnumber , smallestnumber , number ;

    printf("1.Smallest of 3 number : \n");
    printf("2.Largest of 3 number : \n");
    printf("3.Check a number for Odd/Even : \n");
    printf("4.Check for divisible by 5 : \n");
    printf("5.Swap 2 numbers : \n");
    printf("Enter your choice : \n");
    scanf("%d",&choice);

    switch(choice){
        case 1 :
        printf("Enter the firstnumber : \n");
        scanf("%d",&firstnumber);
        printf("Enter the secondnumber : \n");
        scanf("%d",&secondnumber);
        printf("Enter the thirdnumber : \n");
        scanf("%d", &thirdnumber); 
        if (firstnumber < secondnumber && firstnumber < thirdnumber){
            smallestnumber=firstnumber;
        }else if (secondnumber < thirdnumber){
            smallestnumber = secondnumber;   
        }else{
            smallestnumber=thirdnumber;
        }
        printf("smallest number is : %d", smallestnumber);
        break;

        case 2 :
        printf("Enter the firstnumber : \n");
        scanf("%d",&firstnumber);
        printf("Enter the secondnumber : \n");
        scanf("%d",&secondnumber);
        printf("Enter the thirdnumber : \n");
        scanf("%d",&thirdnumber); 
        if (firstnumber > secondnumber && firstnumber > thirdnumber ){
            largestnumber = firstnumber;
        }else if (secondnumber > thirdnumber){
            largestnumber= secondnumber;
        }else{
            largestnumber=thirdnumber;
        }
        printf("largestnumber is : %d", largestnumber);
        break;

        case 3 : 
        printf("Enter the number : \n");
        scanf("%d",&number);
        if(number % 2 == 0){
            printf("the number is even...\n");
        }else{
            printf("the number is odd...\n");
        }
        break;

        case 4 :
        printf("Enter the number : \n");
        scanf("%d",&number);
        if(number % 5 == 0){
            printf("The number is divisible by 5 ");
        }
        else{
            printf("The number is not divisible by 5");
        }
        break;

        case 5 :
        printf("Enter the firstnumber : \n");
        scanf("%d",&firstnumber);
        printf("Enter the secondnumber : \n");
        scanf("%d",&secondnumber);
        firstnumber = firstnumber + secondnumber;
        secondnumber = firstnumber - secondnumber;
        firstnumber = firstnumber - secondnumber;
        printf("After swapping : \n");
        printf("first number : %d\n" , firstnumber);
        printf("second number : %d\n", secondnumber);
        break;

        default:
        printf("invalid choice\n");
      }
      return 0;
    }
    