//c prgrm to demonstrate nested if else
//prgrm to issue DL
#include<stdio.h>   //includes 'stdio.h' to this prgrm
int main(){         // execution starts from here
    int age;
    int isIndian;   //1-indian; 0- Non-indian
    int isTestCleared;  //1-cleared; 0-Not cleared
    int paidFee;
 
    printf("----------welcome to DL test----------\n");

    //core logic to determine certificate can be issued or not
    //nested if statement
    
    printf("enter your age :\n");
    scanf("%d", &age);
    
    printf("enter nationality[1-Indain/0-NonIndian] :\n");
    scanf("%d", &isIndian);

    printf("whether test is cleared[1/0] :\n");
    scanf("%d", &isTestCleared);

    printf("enter fee paid :\n");
    scanf("%d", &paidFee);
    
    printf("Your Data.....\n");
    printf("Age : %d\n",age);
    printf("Nationality :  %d\n", isIndian);
    printf("Is Test Cleared : %d\n", isTestCleared);
    printf("Fees Paid : %d\n", paidFee);
    
    if(isIndian == 1){
        if(age>=18){
            if(isTestCleared == 1){
                if(paidFee == 500){
                    printf("DL can be issued\n");
                }
                else{
                    printf("DL can't be issued,reason-[Fees not paid]\n");
                }
            }else{
                printf("DL can't be issued,reason-[test is not cleared]\n");
            }
        }else{
            printf("DL can't be issued,reason-[under age]\n");
        }
    }else{
        printf("DL can't be issued,reason-[not Indian]\n");
    }  
    return 0;
}