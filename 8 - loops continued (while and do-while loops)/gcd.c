#include<stdio.h>

int main() {
    // printf("Numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);

    while(a != 0) {
        int remain = b%a;
        a = remain;
        b = a;
        // printf("%d %d\n", a, b);
    }
    // printf("GCD = %d\n", b);

    return 0;
}
