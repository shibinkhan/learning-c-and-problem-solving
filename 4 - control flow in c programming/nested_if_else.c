#include<stdio.h>
#include<stdbool.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if(b != 0) {
        if(a%b == 0){
            printf("divisible");
        }
        else {
            printf("not divisible");
        }
    }
    else {
        printf("you can't divide by 0");
    }

    return 0;
}
