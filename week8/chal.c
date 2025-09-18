#include <stdio.h>
int main() {
    int a[5];
    int *p = a;
    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", (p + i));  
    }
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                int t = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = t;
            }
        }
    }
    printf("Sorted: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}
