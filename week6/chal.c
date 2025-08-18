#include <stdio.h>
int main(){
    int e,in[20],i,l;
    printf("Enter the number of elements : ");
    scanf("%d",&e);
    printf("Enter %d integer : ",e);
    
    for(i=1;i<=e;i++){
        scanf("%d",&in[i]);
        if(in[i]==in[i+1]){
            l++;
        }
    }

    

    printf("Element %d occurs %d time\n",in[i],l);


return 0;    
}