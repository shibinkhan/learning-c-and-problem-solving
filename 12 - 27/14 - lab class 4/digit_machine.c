#include<stdio.h>

int main() {
    int numbers[11];
    for (int i=0; i<=9; i++) {
        scanf("%d", &numbers[i]);
    }

    int current = 0;
    for (int i=0; i<3; i++) {
        current = numbers[current];
    }
    printf("%d", current);

    return 0;
}

/**

0 1 2 3 4 5 6 7 8 9
9 0 1 2 3 4 5 6 7 8

**/
