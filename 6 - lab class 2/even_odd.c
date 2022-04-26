#include<stdio.h>

int main() {
    int number;
    printf("Number: ");
    scanf("%d", &number);

    if(number%2 == 0) {
        printf("even");
    }
    else{
        printf("odd");
    }

    return 0;
}
