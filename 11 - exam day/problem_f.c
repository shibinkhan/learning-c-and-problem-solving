#include<stdio.h>

int main() {
    int a, b, c, d, e, f, x;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);

    int takahashiTime = 0;
    while ((takahashiTime += a + c) < x) {
        takahashiTime += a + c;

    }
    printf("%d", takahashiTime);

    return 0;
}
