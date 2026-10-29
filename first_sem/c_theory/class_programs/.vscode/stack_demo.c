#include <stdio.h>
#define size 5

int stack[size];
int top = -1;

// Push method
void push(int mydata)
{
    if(top == size - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = mydata;
    }
}

// Pop method
void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Popped data: %d\n", stack[top]);
        top--;
    }
}

// Display stack
void display_stack()
{
    int i;

    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack data:\n");

        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice, mydata;

    do
    {
        printf("\n1. Push Data\n");
        printf("2. Pop Data\n");
        printf("3. Display Stack\n");
        printf("4. Exit\n");

        printf("Enter ur choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the stack data: ");
                scanf("%d", &mydata);
                push(mydata);
                break;

            case 2:
                pop();
                break;

            case 3:
                display_stack();
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 4);

    return 0;
}