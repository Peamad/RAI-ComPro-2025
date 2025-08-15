#include <stdio.h>
int main(){
    int num[10];
    int m=0;
    int max=0;
    int min=1;
    
    for(m=1;m<=8;m++){
    printf("enter number %d : ",m);
    scanf("%d",&num[m]);
   
    
    if(num[m]>max){
        max=num[m];
    }
    if(num[m]<min){
        min=num[m];
    }

    }
    printf("smallest number is : %d ",min);
    printf("\nlargest number is : %d",max);

return 0;
}
