#include<stdio.h>

int main() {
    printf("Number: ");
    int n;
    scanf("%d", &n);

    printf("*****************\n");
    for(int i=0; i<n; i++) {
        printf("*\t\t*\n");
    }
    printf("*****************\n");

    /*
    // nth even number
    int sum = 0;

    for(int i=2; i<=2*n; i+=2) {
        sum += i;
        printf("i = %d\t sum = %d\n", i, sum);
    }
    printf("Final Sum = %d", sum);
    */

    /*
    // multi
    int sum = 1;

    for(int i=1; i<=n; i++) {
        sum *= i;
        printf("i = %d sum = %d\n", i, sum);
    }
    printf("Final Sum = %d", sum);
    */

    /*
    // sum
    int sum = 0;

    for(int i=1; i<=n; i++) {
        sum += i;
        printf("i = %d sum = %d\n", i, sum);
    }
    printf("Final Sum = %d", sum);
    */

    return 0;
}
