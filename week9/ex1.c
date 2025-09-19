#include<stdio.h>
#include<math.h>

float cir(float r){
    float c=0;
    c = 2 * M_PI * r;
    return c;
}
float area(float r){
    float a=0;
    a=M_PI*r*r;
    return a;
}

int main(){
    float r;
    printf("enter the radius in cm : ");
    scanf("%f",&r);
    printf("Circumference: %.2f\n",cir(r));

    printf("Area: %.2f\n",area(r));

    return 0;


}