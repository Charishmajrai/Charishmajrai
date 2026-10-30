#include <stdio.h>
#define MAX 5

int queue[MAX];         //an array to store queue data
int front=-1;           //to represent queue 'front'
int rear=-1;            //to represent queue 'rear'

//method definition
int isEmpty(void){
    return front == -1 || front > rear;
}

int isFull(void){
    return rear == MAX -1;
}

void enqueue(int value){
    if(isFull()){
        printf("Queue Overflow!Cannot insert %d\n",value);
        return;
    }
    if(front==-1)front = 0;
    queue[++rear]=value;
    printf("Enqueued %d\n",value);
}

int dequeue(void){
    if (isEmpty()){
        printf("Queue Underflow!Nothing to remove\n"); 
        return -1;
    }
    return queue[front++];
}

void display_queue(void){
    if(isEmpty()){
        printf("Queue is empty\n");
        return;
    }
    printf("Queue:\n");
    for (int i=front;i<=rear;i++){
        printf("%d",queue[i]);
        printf("\n");
    }
}

//'int main' is calling function
int main(void){                
    int choice, mydata;

    do
    {
        printf("\n1. Enqueue data\n");
        printf("2. Dequeue data \n");
        printf("3. Display queue data\n");
        printf("4. Exit\n");

        printf("Enter ur choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the queue data: ");
                scanf("%d", &mydata);
                enqueue(mydata);
                break;

            case 2:
                dequeue();          //here 'dequeue' is called function
                break;

            case 3:
                display_queue();
                break;

            case 4:
                printf("Exiting...\n5Thank You\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 4);

    return 0;
}
