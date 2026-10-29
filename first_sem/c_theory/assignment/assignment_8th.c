#include <stdio.h>

void readArray(int a[], int n){
    int i;
    printf("Enter %d elements : \n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}

void traverseArray(int a[], int n){
    int i;
    printf("\n Array elements with their indices: \n");
    for (int i = 0; i < n; i++){
        printf("Index %d : %d \n", i, a[i]);
    }
}

int calculatesum(int a[], int n){
    int i, sum = 0;
    for (i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
}

int main(){
    int a[100], n, sum;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("Invalid arraysize! \n");
        return 1;
    }

    readArray(a, n);
    traverseArray(a, n);
    sum = calculatesum(a, n);

    printf("\n-----------\n");
    printf("Sum of array elements = %d \n", sum);
    printf("-----------\n");

    return 0;
}