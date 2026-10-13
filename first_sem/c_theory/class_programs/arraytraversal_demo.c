#include<stdio.h>


//reads array SIZE from KB
int read_array_size(){
    int size;       //local variable
    printf("Enter the size of the array[>4]:");
    scanf("%d",&size);
    return size;
}

int validate_array_size(int array_size){
    if (array_size>4){
        return 1;
    }else{
        return 0;
    }
    
}

int main(){
    int arraySize;
    int isValid=1;
    while(isValid==1){
        arraySize=read_array_size();
        int Validated=validate_array_size(arraySize);
        if(Validated == 1){
            
            break;
        }
        printf("Array is not valid....Please try again\n");
    }

    int myarray[arraySize];
    int sum=0;
    for(int i=0;i<arraySize;i++){
        printf("Enter %d the element:",i+1);
        scanf("%d",&myarray[i]);
        sum+=myarray[i]; 
    }
    printf("Sum of array element:%d",sum);
}