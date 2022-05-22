#include<stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if (x>=90) {
        printf("expert");
    }
    if (x>=70 && x<90) {
        int ans = 90 - x;
        printf("%d", ans);
    }
    if (x>=40 && x<70) {
        int ans = 70 - x;
        printf("%d", ans);
    }

    return 0;
}
