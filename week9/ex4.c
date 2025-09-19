#include <stdio.h>
#include <string.h>

int v(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int c(const char str[]) {
    int count = 0;
    for (int i = 0; i < (int)strlen(str); i++) {
        if (v(str[i])) count++;
    }
    return count;
}

int main(void) {
    char str[100];

    printf("Input: ");
    fgets(str, sizeof(str), stdin);       
    str[strcspn(str, "\n")] = '\0';       

    printf("Output: Number of vowels: %d\n", c(str));
    return 0;
}
