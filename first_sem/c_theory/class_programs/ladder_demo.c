#include<stdio.h>
int main(){
    // int mymark;    //declaration
    //mymark=76;      //initialization

    int mymark=76;    

    if(mymark>=90){
        printf("Grade : Distinction");
    }
    else if(mymark >=75){
        printf("Grade : First Class");
    }
    else if(mymark >=60){
        printf("Grade : Second Class");
    }
    else{
        printf("Grade : PASS");
    }
    return 0;
}