#include<stdio.h>

int main() {
    char string[10];
    scanf("%s", string);

    int freq[10] = {0};
    for (int i=0; i<9; i++) {
        int digit = string[i];
        freq[digit-48] ++;
    }
    for (int i=0; i<=9; i++) {
        if (freq[i] == 0) {
            printf("%d", i);
        }
    }

    return 0;
}
