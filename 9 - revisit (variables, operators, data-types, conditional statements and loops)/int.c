#include<stdio.h>
#include<limits.h>

int main() {
    int num = 20l;
    short num2 = 4322;
    long long num3 = 343454234234;
    unsigned int num4 = -1;

    printf("%u\n", num4);

    printf("%d\n", SHRT_MIN);
    printf("%lld\n", LONG_MIN);

    return 0;
}
