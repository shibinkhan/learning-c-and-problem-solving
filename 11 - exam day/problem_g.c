
// way 1
#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int ans;
    if (a > b) {
        ans = 0;
    }
    else {
        ans = (b - a) + 1;
    }

    printf("%d", ans);

    return 0;
}

/*
// way 2
#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int ans = (b - a) + 1;
    int ans2;

    while (ans2 < ans) {
        ans2 ++;
    }

    printf("%d", ans2);

    return 0;
}
/*
