#include<stdio.h>

int main() {
    int s, t, x;
    scanf("%d %d %d", &s, &t, &x);

    int go = s;
    int come;
    if (t==0) {
        come = 24;
    }
    else {
        come = t;
    }
    double x2 = x + (0.5);

    if (go <= x2 && come > x2) {
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}
