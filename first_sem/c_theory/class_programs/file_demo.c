#include<stdio.h>
int main(){
    int counter=150;
    while (counter<=250){
        printf("%d\n",counter);
        counter++;
    }
    {
        int i=1;
        while(i<=6){
            int j = 1;
            while (j<i){
                printf("%d ",j);
                j++;
            }
            printf("\n");
            i++;
        }
        
    }
}