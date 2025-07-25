#include<stdio.h>
int main(){
    char A[20],g[20],e[20];
    int I,w;
    float h;
    printf("Enter your name : ");
    scanf("%s",A);
    printf("Enter your age : ");
    scanf("%d",&I);
    printf("Enter your height : ");
    scanf("%f",&h);
    printf("Enter your weight : ");
    scanf("%d",&w);
    printf("Enter your gender : ");
    scanf("%s",g);
    printf("Enter your Education Qualification : ");
    scanf("%s",e);
    
    printf("\nname: %s\n",A);
    printf("age: %d\n",I);
    printf("Gender: %s\n",g);
    printf("Height: %f\n",h);
    printf("Weight: %d\n",w);
    printf("Education %s\n",e);





return 0 ;
}