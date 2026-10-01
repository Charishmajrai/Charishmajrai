// prgm to store and display 5 subject mark

#include<stdio.h>
int main(){
    int sub_marks[5]; //declare an array 'sub_marks' with size 5 of 'int' type
    // storing data / array initialization-array_name[index value]=data/value
    sub_marks[0]=80; //stores the value 80 in an array position whose index is '0'
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88; //static array initialization
    printf("First Sub Mark:%d\n",sub_marks[0]);
    printf("Second Sub Mark:%d\n",sub_marks[1]);
    printf("Third Sub Mark:%d\n",sub_marks[2]);
    printf("Four Sub Mark:%d\n",sub_marks[3]);
    printf("Five Sub Mark:%d\n",sub_marks[4]);


//dynamic initialization of 'my_marks'
for (int i=0; i<5; i++){
    printf("Enter your %d subject mark [int data]:",i+1);
    scanf("%d",&sub_marks);
}

printf("Enter your First Subject Mark [int data]: ");
scanf("%d", &sub_marks[0]);       //store in first location

printf("Enter your Second Subject Mark [int data]: ");
scanf("%d", &sub_marks[1]);       //store in second location

printf("Enter your Third Subject Mark [int data]: ");
scanf("%d", &sub_marks[2]);       //store in third location

printf("Enter your Fourth Subject Mark [int data]: ");
scanf("%d", &sub_marks[3]);       //store in fourth location

printf("Enter your Fifth Subject Mark [int data]: ");
scanf("%d", &sub_marks[4]);       //store in fifth location

printf("My First Subject Mark:%d\n",sub_marks[0]);
printf("My Second Subject Mark:%d\n",sub_marks[1]);
printf("My Third Subject Mark:%d\n", sub_marks[2]);
printf("My Fourth Subject Mark:%d\n",sub_marks[3]);
printf("My Fifth Subject Mark:%d\n",sub_marks[4]);
}