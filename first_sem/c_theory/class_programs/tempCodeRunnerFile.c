#include<stdio.h>
int rollnumber;
float first,second,third,four,five,totalmark;
float average,cgpa;
void getstudentdata(){
    printf("enter the roll number:");
    scanf("%d",&rollnumber);
}
void gettotal(first,second,third,four,five){
    totalmark=first+second+third+four+five;
    printf("the total mark",totalmark);
