#include <stdio.h>
int main(){

    int x=10;       //integer variable x which stores 10
    int *p;         //pointer which store the address of x
    p=&x;

    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",p);

    return 0;

}