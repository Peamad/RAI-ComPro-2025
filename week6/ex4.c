#include <stdio.h>
int main(){
    int num[10];
    int n;
    int even=0;
    int odd=0;
    for(n=1;n<11;n++){
        printf("Enter the value %d here ",n);
        scanf("%d",&num[n]);
    
    
    if(num[n]%2==0){
        even = even+1;
    }
    if(num[n]%2!=0){
        odd = odd+1;
    }


    }
    printf("\nEven number : %d",even);
    printf("\nodd number : %d",odd);

return 0;
}