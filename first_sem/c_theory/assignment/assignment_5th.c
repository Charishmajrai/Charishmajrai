// c pgm to demo nested if else
// pgm to issue DL
#include<stdio.h>           // includes 'studio.h'to this pgm
int main(){                 //excution starts from here
int age;
int isIndian;               //1-indian; 0-Non-indian
int isTestCleared;           //1- cleard; 0-Non cleard
int paidFee;
printf("-----------WELCOME TO THE DL TEST-------------\n");
printf("Enter your age =");
scanf("%d", &age);
printf("Enter Nationality[1-indian/0=non indian] =");
scanf("%d",&isIndian);
printf("Whether test is cleared[1=cleared/0=not cleared] =");
scanf("%d",&isTestCleared);
printf("Enter fee paid =");
scanf("%d",&paidFee);

printf("------------YOUR DATA-------------\n");
printf("Age:%d\n",age);
printf("Nationality:%d\n",isIndian);
printf("Is test is cleared:%d\n",isTestCleared);
printf("Fees Paid:%d\n",paidFee);

// core logic to determine certificate can be issued or not 
//nested if statement

if(isIndian==1){
    if(age>=18){
        if(isTestCleared==1){
            if(paidFee>=500){
                printf("DL CAN BE ISSUED\n");
            }else{
                printf("DL CANNOT BE ISSUED,REASON = FEE NOT PAID\n");
            }    
        }else{
            printf("DL CANNOT BE ISSUED,REASON = TEST IS NOT CLEARED\n");
        }
    }else{
        printf("DL CANNOT BE ISSUED,REASON = UNDER AGE\n");
    }
}else{
    printf("DL CANNOT BE ISSUED,REASON = NOT INDIAN\n");
}
return 0;     
}