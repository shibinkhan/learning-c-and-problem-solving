#include<stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A+B+C == 17) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}
