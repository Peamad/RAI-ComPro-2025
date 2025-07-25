#include<stdio.h>
int main(){
    char N[20];
    int id,pro;
    float phy,cal,GPA;
    printf("enter your name : ");
    scanf("%s",N);
    printf("Enter your student ID : ");
    scanf("%d",&id);
    printf("enter your pogramming score : ");
    scanf("%d",&pro);
    printf("enter your physics score : ");
    scanf("%f",&phy);
    printf("enter your calculus score : ");
    scanf("%f",&cal);
    printf("HI %s! your GPA is %.2f\n",N,(cal+phy+pro)/3);




return 0 ;
}