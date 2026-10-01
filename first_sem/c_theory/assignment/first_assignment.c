#include <stdio.h>
int main(){
    int n;
    int category;
    int total = 0;
    int regular = 0, premium = 0, recliner = 0;

    printf("Enter number of tickets: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Enter category for ticket %d (1/2/3): ", i);
        scanf("%d", &category);

        if(category == 1)
        {
            total = total + 150;
            regular++;
        }
        else if(category == 2)
        {
            total = total + 250;
            premium++;
        }
        else if(category == 3)
        {
            total = total + 400;
            recliner++;
        }
    }

    printf("\n--- Final Bill ---\n");
    printf("Regular tickets: %d\n", regular);
    printf("Premium tickets: %d\n", premium);
    printf("Recliner tickets: %d\n", recliner);
    printf("Total: %d\n", total);

    if(n >= 5)
    {
        total = total - total * 10 / 100;
        printf("Discount applied: Yes\n");
    }
    else
    {
        printf("Discount applied: No\n");
    }

    printf("Final Amount: %d\n", total);

    return 0;
}