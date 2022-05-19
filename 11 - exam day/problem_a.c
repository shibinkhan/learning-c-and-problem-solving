#include<stdio.h>

int main() {
    int n, k, a;
    scanf("%d %d %d", &n, &k, &a);

    int ans = 0;
    if (k > (n-a+1)) {
        ans = k - n + a - 1;
    }
    else {
        ans = a + k - 1;
    }
    ans = ans % n;
    if (ans == 0) {
        ans = n;
    }
    printf("%d", ans);

    return 0;
}


/*
#include<stdio.h>

int main() {
    int n, k, a;
    scanf("%d %d %d", &n, &k, &a);

    if (a==1) {
        printf("1");
    }
    else {
        int output = (a-1) + k%n;
        printf("%d", output);
    }

    return 0;
}
*/
