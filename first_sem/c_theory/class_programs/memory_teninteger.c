#include <stdio.h>   
#include <stdlib.h> 

int main(){
    int *p;             // Declares an integer pointer
    int sum = 0;        // Initializes sum as zero
    p = (int*)malloc(10 * sizeof(int));   // Allocates memory for 10 integers

    // Checks whether memory allocation failed
    if(p == NULL){
        printf("Memory allocation failed\n");   
        return 1;                              
    }

    for(int i = 0; i < 10; i++)
    {
        printf("Enter integer %d: ", i + 1);    // Asks the user for a number
        scanf("%d", &p[i]);                     // Stores the entered number in allocated memory
        sum = sum + p[i]; 
    }
    printf("Sum = %d\n", sum);              // Displays the total sum

    free(p);  
    return 0;  
}