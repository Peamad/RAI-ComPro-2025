#include <stdio.h>
void sum(int arr[], int n, int *eSum, int *oSum) {
    *eSum = 0;
    *oSum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            *eSum += arr[i];
        else
            *oSum += arr[i];
    }
}

int main() {
    int n;

    printf("N: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }

    int eSum, oSum;
    sum(arr, n, &eSum, &oSum);

    printf("Output: Sum of even number: %d\n", eSum);
    printf("        Sum of odd number: %d\n", oSum);

    return 0;
}

