#include<stdio.h>
int main(){
    int sum=0, number,i;
    printf("Enter N value :");
    scanf("%d",&number);
    for(i=5; i<=number; i++){
        sum=sum+i;
    }
    if(number>=5){
         printf("sum= %d ",sum);
    }
    else{
        printf("please enter N greater than 5");
    }
    return 0;
    }