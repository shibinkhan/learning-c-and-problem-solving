// 10-4 Solving Restoring Three Numbers
// https://codeforces.com/problemset/problem/1154/A

#include<stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int sum = 0;
    if (a > sum) sum = a;
    if (b > sum) sum = b;
    if (c > sum) sum = c;
    if (d > sum) sum = d;

    printf("%d", sum);

    return 0;
}

