#include <stdio.h>
#include <stdlib.h>

int main(){
    int*p;
    p=(int*)calloc(5,sizeof(int));

    if(p==NULL){
        printf("Memory Allocated Failed\n");
        return 1;
    }

    for(int i=0;i<5;i++){
        printf("%d\n",p[i]);
    }
    free(p);
    return 0;

}