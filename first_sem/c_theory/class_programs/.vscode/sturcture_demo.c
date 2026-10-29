#include <stdio.h>
//structure definition
struct student
{
    //structure member
    int id;
    char name[10];
    char contactno[10];
    int pin;
};

int main(){
    //creating structure variable 'firstStudent' of type 'student'
    struct student firstStudent;
    struct student secondStudent;

    firstStudent.id=100;    //member 'id' of 'firstStudent' is initialized with 100
    secondStudent.id=200;   //member 'id' of 'secondStudent' is initialized with 200

    printf("First Student ID:%d\n",firstStudent.id);
    printf("Second Student ID:%d",secondStudent.id);

    
}