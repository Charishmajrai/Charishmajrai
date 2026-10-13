#include <stdio.h>
int main(){
    //ARITHMETIC OPEARION USING INTEGER
    int a=10 ,b=3;
    int sum1,diff1,multi1,divi1,mod1;
    sum1=a + b;
    diff1=a - b;
    multi1=a * b;
    divi1=a / b;
    mod1=a % b;

    printf("----------INTEGER OPERATIONS----------\n");
    printf("Sum is:%d\n",sum1);
    printf("Difference is:%d\n",diff1);
    printf("Product is:%d\n",multi1);
    printf("Quotient is:%d\n",divi1);
    printf("Reminder is:%d\n",mod1);

    //ARITHMETIC OPEARION USING FLOAT
    float x=12.5, y=4.2;
    float sum2,diff2,multi2,divi2,mod2;
    sum2=x + y;
    diff2=x - y;
    multi2=x * y;
    divi2=x / y;
    mod2=x-((int)(x/y)*y);

    printf("----------FLOAT OPERATIONS----------\n");
    printf("Sum is:%.2f\n",sum2);
    printf("Difference is:%.2f\n",diff2);
    printf("Product is:%.2f\n",multi2);
    printf("Quotient is:%.2f\n",divi2);
    printf("Reminder is:%.2f\n",mod2);

    //ARITHMETIC OPEARION USING DOUBLE
    double m=20.55,n=5.5;
    double sum3,diff3,multi3,divi3,mod3;
    sum3=m + n;
    diff3=m - n;
    multi3=m * n;
    divi3= m / n;
    mod3=m -((int)(m/n)*n);

    printf("----------DOUBLE OPERATIONS----------\n");
    printf("Sum is:%.2lf\n",sum3);
    printf("Difference is:%.2lf\n",diff3);
    printf("Product is:%.2lf\n",multi3);
    printf("Quotient is:%.2lf\n",divi3);
    printf("Reminder is:%.2lf\n",mod3);

    //ARITHMETIC OPEARION USING CHARACTER
    char c='A',d='2';
    int  sum4,diff4,multi4,divi4,mod4;
    sum4=c + d;
    diff4=c - d;
    multi4=c * d;
    divi4= c / d;
    mod4=c % d;

    printf("----------CHARACTER OPERATIONS----------\n");
    printf("Sum is:%d\n",sum4);
    printf("Difference is:%d\n",diff4);
    printf("Product is:%d\n",multi4);
    printf("Quotient is:%d\n",divi4);
    printf("Reminder is:%d\n",mod4);


}