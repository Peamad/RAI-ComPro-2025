#include<stdio.h>
#include<string.h>
int num,i,max,min,score[100],passco;
char name[100][100],pass[100][100];
float avg;
void grade(int num,char name[100][100],int score[],float *avg,int *max,int *min,char pass[100][100],int *passco){
    *avg =0;
    *max = score[0];
    *min = score[0];
    *passco = 0;
    for(i=0;i<num;i++){
        *avg += score[i];
        if(score[i]>=*max){
            *max = score[i];
        }
        if (score[i]<=*min){
            *min = score[i];
        }
        if(score[i]>=60){
            strcpy(pass[*passco],name[i]);
            (*passco)++;
        }
    }
    *avg =*avg/num;
}
int main(){
        printf("Enter number of student : ");
        scanf("%d",&num);
        printf("\n");
    for (i=0;i<num;i++){
        printf("Enter name of student %d : ",i+1);
        scanf("%s",name[i]);
        printf("Enter grade of %s : ",name[i]);
        scanf("%d",&score[i]);
        printf("\n");
    }
        grade(num,name,score,&avg,&max,&min,pass,&passco);
        printf("\n--- Results ---\n");
        printf("Average grade: %.2f\n", avg);
        printf("Highest grade: %d\n", max);
        printf("Lowest grade: %d\n", min);
        printf("Students who passed:\n");
    for (i = 0; i < passco; i++){
        printf("%s\n", pass[i]);
    }


    return 0;
}