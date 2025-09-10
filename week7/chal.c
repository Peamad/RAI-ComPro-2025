#include<stdio.h>
int main(){
    int i;
    struct student{
        char name[20];
        int id;
        float avg,m,e,s,h,avm,ave,avs,avh;
    }s[10];

    for(i=1;i<=3;i++){
        printf("enter name , ID and 4 grades(math english science history) for student %d\n",i);
        scanf("%s %d %f %f %f %f",s[i].name,&s[i].id,&s[i].m,&s[i].e,&s[i].s,&s[i].h);
        s[i].avg=(s[i].m+s[i].e+s[i].s+s[i].h)/4;
        s[i].avm=(s[1].m+s[2].m+s[3].m)/3
        s[i].ave=(s[1].e+s[2].e+s[3].e)/3
        s[i].avs=(s[1].s+s[2].s+s[3].s)/3
        s[i].avh=(s[1].h+s[2].h+s[3].h)/3

    }
    printf("student averages :\n");
    int max=0
    for(i=1;i<=3;i++){
        if(s[i].avg>s[max].avg)
            max = i;
        printf("%s(ID: %d): %.2f\n",s[i].name,s[i].id,s[i].avg);

    }
    int maxa=s[i].avm;
    
    for(i=1;i<=3;i++){
        if(s.[i].ave>maxa) maxa = s.[i].ave;
        if(s.[i].avs>maxa) maxa = s.[i].avs;
        if(s.[i].avh>maxa) maxa = s.[i].avh;
    }
    printf("Top student: %s with %d ",s[max].name,s[max].avg);
    printf("subject Averages:\n");
    printf("math: %.2f\n",s[i].avm);
    printf("English: %.2f\n",s[i].ave);
    printf("science: %.2f\n",s[i].avs);
    printf("History: %.2f\n",s[i].avh);

    printf("top subject: ")
    return 0;
}