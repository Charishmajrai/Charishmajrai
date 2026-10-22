#include <stdio.h>
void swap(int *a ,int *b){  //pointer that receive the address of m and n
    int t = *a;             //stores the value of m in temporary variable t 
    *a =*b;                 //assigns the value of n to m
    *b=t;                   //assigns the old value of m and n
}
int main(){
    int m,n;
    printf("Enter two numbers:");
    scanf("%d %d",&m,&n);

    swap(&m,&n);            //calls the swap function by passing address

    printf("After swapping\n");
    printf("m=%d\n",m);
    printf("n=%d\n",n);
}