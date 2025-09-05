#include<stdio.h>
int main(){

    int i;
    struct student{
        char name[100],last[100];
        int age;
        float score;
    }s[5];

    for(i=1;i<=3;i++){
        printf("student %d's name:",i);
        scanf("%s %s",s[i].name,s[i].last);
        printf("student %d's age:",i);
        scanf("%d",&s[i].age);
        printf("student %d's score:",i);
        scanf("%f",&s[i].score);
    }
    for(i=1;i<=3;i++){
         printf("Student %d name is %s %s,age%d,score%.1f",i,s[i].name,s[i].last,s[i].age,s[i].score);
    }    

    return 0;
}