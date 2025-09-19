#include<stdio.h>
#include<math.h>

void pir(int i,int j){
    for(int k=i;k<=j;k++){
 
    if(k%2!=0|| k==2){
        printf("%d ",k);
    }
    }
}

int main(){
    int i,j;
    printf("enter the start and end number : ");
    scanf("%d %d",&i,&j);
    printf("The prime numbers within the intervals are: ");
    pir(i,j);
return 0;
}