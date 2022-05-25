/*
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
    else if (takahashi == aoki) {
        printf("Draw");
    }

    return 0;
}
*/

#include<stdio.h>

int main() {
    int a, b, c, d, e, f, x;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);

    int x2 = x;
    int run1 = 0;
    while (x != 0) {
        if (x>=a) {
            run1 += a;
            x -= a;
        }
        else {
            run1 += x;
            x = 0;
        }
        //rest1
        if (x>=c) {
            x -= c;
        }
        else {
            x = 0;
        }
    }

    int run2 = 0;
    while (x2 != 0) {
        if (x2>=d) {
            run2 += d;
            x2 -= d;
        }
        else {
            run2 += x2;
            x2 = 0;
        }
        //rest2
        if (x2>=f) {
            x2 -= f;
        }
        else {
            x2 = 0;
        }
    }

    int total1 = run1 * b;
    int total2 = run2 * e;

    if (total1 > total2) {
        printf("Takahashi");
    }
    else if (total1 < total2) {
        printf("Aoki");
    }
    else {
        printf("Draw");
    }

    return 0;
}
