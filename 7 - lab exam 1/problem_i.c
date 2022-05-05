#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int biggest;
    if(a >= b && a >= c) {
        biggest = a;
    }
    if(b >= a && b >= c) {
        biggest = b;
    }
    if(c >= a && c >= b) {
        biggest = c;
    }

    int output = (a+b+c) - biggest;
    printf("%d", output);

    return 0;
}
