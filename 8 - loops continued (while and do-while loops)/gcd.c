#include<stdio.h>

int main() {
    printf("Numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);

    int gcd = 1;
    for(int i=1; i<=a && i<=b; i++) {
        if((a%i == 0) && (b%i == 0)) {
            printf("Common Factors: %d\n", i);
            gcd = i;
        }
    }
    printf("GCD: %d\n", gcd);

/*
    printf("Numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);

    while(a != 0) {
        int remain = b%a;
        a = remain;
        b = a;
        printf("%d %d\n", a, b);
    }
    printf("GCD = %d\n", b);
*/
    return 0;
}
