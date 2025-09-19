#include<stdio.h>
#include<math.h>
int sq(int i){
    int a=0;
    a=i*i;
    return a;
}
int main(){
    int o,p,sum;
    printf("Enter the two integers: ");
    scanf("%d %d",&o,&p);
    sum = sq(o)+sq(p);
    printf("Sum of squares of %d and %d is %d",o,p,sum);
}