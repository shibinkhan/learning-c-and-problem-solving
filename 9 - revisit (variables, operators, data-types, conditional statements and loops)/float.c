#include<stdio.h>
#include<stdlib.h>

int main() {
    float num = 20.41;
    // printf("%f\n", num);

    double num2 = 20.41;
    // printf("%lf\n", num2);

    double num3 = 100.0;
    double square = pow(num3, 2);
    printf("%lf\n", square);

    double cube = pow(num3, 3);
    printf("%lf\n", cube);

    return 0;
}

