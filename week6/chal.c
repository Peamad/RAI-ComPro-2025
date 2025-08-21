#include <stdio.h>

int main() {
    int num, value[300], printed[300] = {0};
    int i, j, count;

    printf("Enter number of elements:");
    scanf("%d", &num);

    printf("Enter %d integers: ",num);
    for (i = 0; i < num; i++) {
        scanf("%d", &value[i]);
    }

    for (i = 0; i < num; i++) {
        if (printed[i])
            continue;

        count = 1;
        for (j = i + 1; j < num; j++) {
            if (value[i] == value[j]) {
                count++;
                printed[j] = 1; 
            }
        }
        printf("Element %d occurs %d times\n", value[i], count);
    }

    return 0;
}