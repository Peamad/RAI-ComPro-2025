#include<stdio.h>
#include<math.h>
int main(){
    int i;
    float d;
    struct co{
        float x,y;
    }c[2];
    for(i=1;i<=2;i++){
        printf("X%d :",i);
        scanf("%f",&c[i].x);
        printf("y%d :",i);
        scanf("%f",&c[i].y);

    }

    d = sqrt(pow(c[2].x-c[1].x, 2) + pow(c[2].y-c[1].y, 2));

    printf("Distance between (%.3f,%.3f) and (%.3f,%.3f) is %.3f unit",c[1].x,c[2].x,c[1].y,c[2].y,d);
}