#include <stdio.h>
int main(){
    int sc[6];
    int m=0;
    int avg=0;
    int top=0;
    
    for(m=1;m<=5;m++){
    printf("enter mark of student %d : ",m);
    scanf("%d",&sc[m]);
    avg= sc[m]+avg;
    
    if(sc[m]>top){
        top=sc[m];
    }
    

    }

    printf("total marks : %d ",avg);
    printf("\nHighest mark : %d ",top);
return 0;
}