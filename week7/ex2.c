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
    int max=0;
    for(i=1;i<=3;i++){
        if(s[i].score>s[max].score)
            max = i;
        
    }    
     printf("The highest scores belongs to %s %s at %.1f score!",s[max].name,s[max].last,s[max].score);
    return 0;
}