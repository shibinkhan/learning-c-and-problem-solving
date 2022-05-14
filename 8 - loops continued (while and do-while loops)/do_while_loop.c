#include<stdio.h>

int main() {
    int num;

    do { // 1 or true is same
        scanf("%d", &num);
    } while (num%2 != 0);

    printf("Your input: %d", num);

    return 0;
}
