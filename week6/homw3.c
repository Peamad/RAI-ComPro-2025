#include <stdio.h>
int main(){
    int A[3][3] = {1,0,-1,-1,2,3,2,4,5};
    int num[3][3] = {0};
    int f,s,n;
    printf("A x A = \n");
    for (int f=0;f<=2;f++){
        for (int s=0;s<=2;s++){
            for(int n=0;n<=2;n++){
                num[f][s] += A[f][n]*A[n][s];
            }
           
            printf("%d ",num[f][s]);
            }
            
        printf("\n");
    }

    
    return 0;    
}