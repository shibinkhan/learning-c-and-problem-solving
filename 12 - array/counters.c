#include<stdio.h>

int main() {
    int a[10];
    a[0]+=10;
    a[0]= a[0]*2;
    printf("%d", a[0]);

    return 0;
}
