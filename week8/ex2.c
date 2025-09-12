#include<stdio.h>
int main(){
    int a=0;
    int b=5;
    int m;
    int *p;
    int *f;
    p=&a;
    f=&b;
    
    printf("Before reverse : a=%d , b=%d\n",a,b);
    *p=m;
    *p=b;
    b=m;

    printf("after reverse : a=%d , b=%d",a,b);


    
    return 0;
}