#include<stdio.h>
int main(){
    int i,total;
    struct time{
        int min,sec;
    }t[3];
    for(i=0;i<3;i++){
        printf("time input (m:s): ");
        scanf("%d:%d",&t[i].min,&t[i].sec);
        total+=t[i].min*60+t[i].sec;
    }

    printf("Total time elasped: %d ",total);

return 0;    
}