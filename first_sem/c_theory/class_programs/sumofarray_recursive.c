#include <stdio.h>

int arraySum(int arr[],int n)
{
    if (n == 0)
    {
        return 0;
    }
    return arr[n - 1] + arraySum(arr, n - 1);
}

int main()
{
    int mynumber[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d the element: ", i + 1);
        scanf("%d", &mynumber[i]);
    }
    int total = arraySum(mynumber, 5);

    printf("The sum is %d", total);

    return 0;
}