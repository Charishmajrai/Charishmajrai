#include<stdio.h>
int main(){
    // int mymark;    //declaration
    //mymark=76;      //initialization

    int mymark;
    int python,maths,DBMS;
    int detail=1;
    int total;
    int percentage;
    
    do{
        printf("\nenter the student details:");
        scanf("%d",&detail);
        printf("enter the mark in dbms:");
        scanf("%d",&DBMS);
        printf("enter the mark in python:");
        scanf("%d",&python);
        printf("enter the mark in maths:");
        scanf("%d",&maths);
        
        total=DBMS+python+maths;
        printf("total mark:%d\n",total);

        percentage=total / 3;
        printf("percentage:%d\n",percentage);
        detail++;
    }while(detail<=3);

    printf("\nexit\n");
    return 0;  
}