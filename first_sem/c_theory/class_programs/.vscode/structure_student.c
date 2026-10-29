#include <stdio.h>

//global array of struct 'students' with size 5
//can be accessed in any method . Global scope         

struct student{
    int rollno;
    char name[5];
    int firstmark;          
    int secondmark;
    int thirdmark;
    int total;
    float average;
};
struct student students[5];

void add_studentdetail(){

    struct student student_list[5]; 

    printf("Enter the detail of 5 students\n");

    for(int i=0;i<5;i++){

        printf("\n---Enter the %d student data---\n",i+1);

        printf("Enter the roll number:");
        scanf("%d",&student_list[i].rollno);

        printf("Enter the name:");
        scanf("%s",&student_list[i].name);

        printf("Enter the firstmark:");
        scanf("%d",&student_list[i].firstmark);

        printf("Enter the secondmark:");
        scanf("%d",&student_list[i].secondmark);

        printf("Enter the thirdmark:");
        scanf("%d",&student_list[i].thirdmark); 

    }

}

//to find the total mark of three students
void calculate_total(){

    struct student students[5];

    for(int i=0;i<5;i++){
        students[i].total=0;
        students[i].total=students[i].firstmark+students[i].secondmark+students[i].thirdmark; 
    }   
    printf("\n----Total mark of each student------\n");
    for (int i=0;i<5;i++){
        printf("Total mark of %d student:%d\n",i+1,students[i].total);
    }
    
}

//to find the average mark of three students
void calculate_average(){
    struct student students[5];

    for (int i=0;i<5;i++){
        students[i].average=0;
        students[i].average=(students[i].firstmark+students[i].secondmark+students[i].thirdmark)/3;
    }
    printf("\n-----Average Mark of ench student------\n");
    for (int i=0;i<5;i++){
        printf("Averege mark of %d student:%f\n",i+1,students[i].average);
    }
}


//To display the student details in tabular form
void display_student()
{
    struct student students[5];

    printf("\n----------------------------------------------------------------------------\n");
    printf("ID\tName\t\tFirst Mark\tSecond Mark\tThird Mark\tTotal\tAverage\n");
    printf("--------------------------------------------------------------------------------\n");

    for(int i=0; i<5; i++)
    {
        printf("%d\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t%.2f\n",
        students[i].rollno,
        students[i].name,
        students[i].firstmark,
        students[i].secondmark,
        students[i].thirdmark,
        students[i].total,
        students[i].average);
    }

    printf("----------------------------------------------------------------------------------\n");
}



int main(){
    struct student students[5];

    add_studentdetail();

    calculate_total();

    calculate_average();

    display_student();

    


    // for (int i=0;i<5;i++){
    //     printf("\n---%d Student detail---\n",i+1);
    //     printf("Student Name:%s\n",students[i].name);
    //     printf("Student firstmark:%d\n",students[i].firstmark);
    //     printf("Student secondmark:%d\n",students[i].secondmark);
    //     printf("Student thirdmark:%d\n",students[i].thirdmark);
        

    // }
}