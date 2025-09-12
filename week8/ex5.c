#include<stdio.h>
int main(){
    int i,sum;
    int size = 6;
	int array[] = { 3, 1, 2, 4, 5, 6 };
    int *a = array;

    for(i=0;i<size;i++){
       sum+=*a;
       a++;
    }

    printf("The sum of array is: %d",sum);



    return 0;
}