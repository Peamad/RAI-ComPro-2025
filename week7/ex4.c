#include<stdio.h>
#include<math.h>
int main(){
    int i;
    struct co{
        float x,y;
    }c[2];
    for(i=1;i<=2;i++){
        printf("X%d :",i);
        scanf("%f",&c[i].x);
        printf("y%d :",i);
        scanf("%f",&c[i].y);

    }


    printf("Resultant vector is equvalence to %.2fi + %.2fj",c[1].x+c[2].x,c[1].y+c[2].y);

return 0;
}