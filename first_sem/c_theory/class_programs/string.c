#include <stdio.h>
int main(){
    char student[90];
    printf("Enter the name:");
    fgets(student,sizeof(student),stdin);
    printf("%s",student);


    char word[]="Program";
    for (int i=0;word[i] != '\0';i++){
        printf("word[%d] = %c-", i, word[i]);
    }
}