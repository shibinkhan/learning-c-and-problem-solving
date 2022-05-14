/*
// for

#include<stdio.h>

int main() {
    for(int i = 1; i<=10; i++) {
        if (i%3 == 0) continue;

        printf("%d = ", i);

        for(int j = 1; j<=10; j++) {
            printf("%d ", i*j);
        }
        printf("\n");
    }

    return 0;
}

*/

// while

#include<stdio.h>

int main() {
    int num = 1234;

    int sum = 0;
    while(num > 0) {
        int lastDigit = num%10;
        num /= 10;

        if(lastDigit%2==0) continue;
        sum += lastDigit;
    }
    printf("Sum = %d", sum);

    return 0;
}
