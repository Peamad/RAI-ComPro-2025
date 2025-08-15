#include <stdio.h>
int main(){
    int num[10];
    int n;
    for(n=1;n<11;n++){
        printf("Enter the value %d here ",n);
        scanf("%d",&num[n]);
    }
    printf("\nvalue in array are : ");
    for(n=1;n<=10;n++){
        printf("%d",num[n]);
    }

    return 0;
}