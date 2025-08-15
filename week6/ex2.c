#include <stdio.h>
int main(){
    int i;
    int num[9]={1,2,3,4,5,6,7,8,9};
    printf("reversed array : ");
    for(i=8;i>=0;i--){
        printf("%d ",num[i]);
    }
return 0;
}