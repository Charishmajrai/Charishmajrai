#include<stdio.h>
int rollnumber;
float first,second,third,four,five,totalmark;
float average,cgpa;
void getstudentdata(){
    
    printf("enter the roll number:");
    scanf("%d",&rollnumber);

    printf("Enter the mark of five subject:");
    scanf("%f %f %f %f %f",&first,&second,&third,&four,&five);
}

float gettotal()
{
    totalmark=first+second+third+four+five;
    return totalmark;
}

float getaverage()
{
    average=totalmark/5;
    return average;
}

float getcgpa()
{
    cgpa=average/9.5;
    return cgpa;
}

int main()
{
    getstudentdata();
    float totalmark=gettotal();
    float average=getaverage();
    float cgpa=getcgpa();
    
    printf("=======STUDENT DETAIL==========\n");
    printf("the roll number:%d\n",rollnumber);
    printf("the total mark:%.2f\n",totalmark);
    printf("the average mark:%.2f\n",average);
    printf("the cgpa:%f\n",cgpa);
    
    
    return 0;
}

//int gettotal(){
//sum=maths_marks+eng_marks;
//return sum;
//}

//float getaverage(){
//average=sum/2;
//return average  //return average to main()
//}

//after int main we want to call 
//int total=gettotal()
//printf("The total is :%d",total)