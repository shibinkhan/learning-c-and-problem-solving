#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int reversed = 0;
    while(num > 0) {
        int digit = num%10;
        num /= 10;
        //printf("digit = %d, num = %d\n", digit, num);
        reversed = reversed * 10 + digit;
    }
    printf("reversed = %d\n", reversed);

    return 0;
}
