#include<stdio.h>

int main() {
    int a, b, c, d, e, f, x;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);

    // Takahashi
    int tksiTime = a + c;
    int tksiNextRun = 0;

    if (tksiTime <= x) {
        tksiNextRun += x - tksiTime;
    }
    int takahashi = (a + tksiNextRun) * b;
    // printf("%d\n", takahashi);

    // Aoki
    int aokiTime = d + f;
    int aokiNextRun = 0;

    if (aokiTime <= x) {
            aokiNextRun += x - aokiTime;
        }
    int aoki = (d + aokiNextRun) * e;
    // printf("%d\n", aoki);

    // Final
    if (takahashi > aoki) {
        printf("Takahashi");
    }
    else if (aoki > takahashi) {
        printf("Aoki");
    }
    else {
        printf("Draw");
    }

    return 0;
}
