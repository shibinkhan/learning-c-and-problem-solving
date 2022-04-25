#include<stdio.h>

int main() {
    // Implicit Type Conversion
    double realNumber = 20.75;
    int number = realNumber;
    printf("number = %d\nrealNumber = %lf", number, realNumber);

    // Explicit Type Convertion
    // printf("number = %d\n", (int)realNumber);

    return 0;
}