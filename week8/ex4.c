#include<stdio.h>
int main() {
    int i;
	int size = 6;
	int array[] = { 3, 1, 2, 4, 5, 6 };
    int *a = array;

    for(i=0;i<size;i++){
        printf("%d\n",*a);
        a++;
    }

    return 0;
}