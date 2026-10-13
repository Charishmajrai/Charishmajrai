//Program to demonstrate array traversal
//Program to get the sum of array elements.
//Using Arryas and Functions

#include<stdio.h>
//reads array SIZE from KB
int read_array_size();
// validation function
int validate_array_size(int);
// Sum function
int get_sum(int[],int);

int main(){
    int isValid=1;
    int arraySize=0;
    while (isValid==1)
    {
        //calling method & stores returned value
        arraySize=read_array_size();
        //passing 'arraySize'; int array_size=arraySizes
        int validated=validate_array_size(arraySize); 
        if(validated == 1){

            break;
        }
        printf("Pls try again..\n");
    }

    //array initialization
    int my_array[arraySize];
    for (int i = 0; i<arraySize; i++)
    {
        printf("\nEnter %d array elements:", i+1);
        scanf("%d",&my_array[i]);
    }
    //to get the sum of array elements
    int sum=get_sum(my_array,arraySize);
    printf("Array :[");
    for(int i=0; i<arraySize;i++){
        printf("%d ", my_array[i]);

    }
    printf("]");
    printf("\nThe sum is: %d",sum);
    
    
}

int get_sum(int number_array[],int array_size){
    int total=0;
    for(int i=0;i<array_size;i++){
        total+=number_array[i];

    }
    return total;
}

int read_array_size(){
    int size;   //local variable
    printf("Enter the array size[>4]:");
    scanf("%d",&size);
    return size;
}

int validate_array_size(int array_size){
    if(array_size >4){
        return 1;
    }
    return 0;
 
}


