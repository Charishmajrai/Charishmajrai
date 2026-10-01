#include<stdio.h>
int main(){
    int arraySize=read_array_size(); //calling method & stores returned value
    int isValid=validate_array_size(arraySize);  //passing 'arraySize'; int array_size=arraySize
    if (isValid==0){
        printf("Array size is not valid:rewrite");
    }
}

//reads array SIZE from KB
int read_array_size(){
    int size;
    printf("Enter the size of the array[>4]:");
    scanf("%d",&size);
    return size;
}

int validate_array_size(int array_size){
    if (array_size>4){
        return 1;
    }
    return 0;
}

int initialize_array(){
    
}