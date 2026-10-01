#include<stdio.h>
void addition(int first,int second){
    int sum;
    //int first=100;
    //int second=200;
    sum=first+second;
    printf("the sum is %d",sum);
}

int main(){
    addition(10,20);
    addition(100,200);
    addition(300,200);
    printf("\nprgram terminated\n");
}