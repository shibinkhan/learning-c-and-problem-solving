#include<stdio.h>

int main() {
    int num;

    printf("Number: ");
    scanf("%d", &num);

    int abs = num >= 0 ? (0 + num) : (num * 100);
    printf("%d", abs);

    return 0;
}

/// condition ? true : false;
