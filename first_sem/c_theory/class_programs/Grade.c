#include<stdio.h>
int main(){
    int dbms,python,c;
    float Total, percentage;
    printf("enter the dbms mark : ");
    scanf("%d",&dbms);

    printf("enter the python mark : ");
    scanf("%d",&python);

    printf("enter the c mark : ");
    scanf("%d",&c);

    Total = dbms + python + c ;
    percentage = (Total / 300) * 100;

    if (percentage >70)
    printf("Grade : distinction ");

    if (percentage >= 60 && percentage < 70)
    printf("Grade : 1st class ");

    if (percentage >= 35 && percentage < 70)
    printf("Grade : 2nd class");

    if(percentage <35)
    printf("Grade : fail");
     
    return 0;
}