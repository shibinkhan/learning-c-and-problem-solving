/*
// a: 1+2+3+.....100

#include<stdio.h>

int main() {
    int target = 100;
    int sum;

    for(int i=1; i<=target; i++) {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}
*/

/*
// b: 1+3+5+...+29

#include<stdio.h>

int main() {
    int target = 29;
    int sum;

    for(int i=1; i<=target; i+=2) {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}
*/

// c: 50 + 49 + 48 + 47 + …… (প্রথম ২০টি পদ)

#include<stdio.h>

int main() {
    int target = 31;
    int sum;

    for(int i=50; i>=target; i--) {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}


