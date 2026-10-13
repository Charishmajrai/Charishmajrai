#include <stdio.h>
int main(){
    int numbers[5];
    int newData;
    int index;
    for (int i=0;i<4;i++){
        printf("Input %d array element:",i+1);
        scanf("%d",&numbers[i]);
    }
    printf("Enter the element for new element:");
    scanf("%d",&newData);

    printf("Enter index value:");
    scanf("%d",&index);

    //insertion process to insert 'newData' at index 'index'
    numbers[4]=numbers[3];
    numbers[3]=numbers[2];
    numbers[2]=newData;
    numbers[1]=numbers[1];

    for (int i=0;i<5;i++){
        printf("%d\n",numbers[i]);
    }
}