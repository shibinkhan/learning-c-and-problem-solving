#include<stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (!C<=A && !C>=B) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}
