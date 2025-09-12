#include<stdio.h>
int main(){
    int array[] = {3,1,2,4,5,6};
    int *a;
    a=&array;   
    int i,max=0;
    for(i=0;i<6;i++){
        if(*a>max)max=*a;
        a++;
    }

    printf("max value : %d\n",max);
    return 0;
}