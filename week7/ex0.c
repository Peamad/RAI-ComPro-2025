#include<stdio.h>
int main(){
    int i=0;
    struct student{
        char name[20];
        int age;
    }s[10];
    for(i=1;i<=3;i++){
        printf("enter your name ");
        scanf("%s",s[i].name);
        printf("enter your age ");
        scanf("%d",&s[i].age);
    
        if(s[i].age<20)
            printf("%s,%d"s[i].name,s[i].age);

    }

return 0;
}