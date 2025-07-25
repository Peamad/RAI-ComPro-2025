#include<stdio.h>
int main(){
    char N[50],uni[20];
    int age;
    float he;


    printf("enter your full name : ");
    scanf("%[^\n]",N);
    printf("enter your age : ");
    scanf("%d",&age);
    printf("enter your height : ");
    scanf("%f",&he);
    printf("enter your university name : ");
    scanf("%s",uni);

    printf("Hi! everyone. this is %s from %s. I am %d years old and my height is %0.1f cm tall ",N,uni,age,he);






return 0 ;
}