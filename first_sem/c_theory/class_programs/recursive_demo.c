#include <stdio.h>
int factorial_math(int number){
    if (number==0){
        return 1;
    }    
        return number * factorial_math(number - 1);
    
}
int main(){
    int number=0;
    printf("Enter the number:");
    scanf("%d",&number);
    printf("%d!=%d",number,factorial_math(number));
    return 0;
}


