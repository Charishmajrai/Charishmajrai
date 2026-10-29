#include<stdio.h>
int main(){
    int accountno=1000;
    float balance=500;
    int choice;
    float amount;
    int useraccount;
    printf("----------Welcome To My Bank----------\n");
    printf("1.Deposite\n");
    printf("2.withdraw\n");
    printf("3. Account view\n");
    printf("4.Exit\n");
    printf("Enter your option : \n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        printf("enter account number: ");
        scanf("%d",&useraccount);
        if(useraccount == accountno){
            printf("valid account\n");
            printf("Enter deposite amount:");
            scanf("%f", &amount);
            balance= balance + amount;
            printf("Current balance : %f",balance);
        }else{
            printf("Invalid account");
        }
        break;
        
        case 2 :
        printf("enter the account number : ");
        scanf("%d",&useraccount);
        if(useraccount==accountno){
            printf("valid account\n");
            printf("enter withdraw amount : \n ");
            scanf("%f", &amount);
            if(amount<=balance){
                balance = balance - amount;
                printf("sufficient balance\n");
                printf("the balance after withdrawal : %f\n", balance);
                printf("withdraw successfull\n");
            }else{
            printf("insufficent balance\n");
            }
        }else{
            printf("Invalid account");
        }
        break;
       
        case 3:
        printf("Current balance is : %f\n", balance);
        break;

        case 4 :
        printf("exiting program\n");
        break;

    default:
    printf("invalid option");
}
return 0;
}