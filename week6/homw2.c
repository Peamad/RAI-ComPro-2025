#include <stdio.h>
int main(){
    int A[3][3] = {1,0,-1,-1,2,3,2,4,5};
    int f,s;
    printf("Transpose of A  = \n");
    for (int f=0;f<=2;f++){
        for (int s=0;s<=2;s++){
            printf("%d ",A[s][f]);
            }
            
        printf("\n");
    }

    
    return 0;    
}