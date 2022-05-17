#include<stdio.h>
#include<math.h>

int main() {
    float num = 20.41;
    printf("%f\n", num);

    double num2 = 20.41;
    printf("%lf\n", num2);

    int num3 = 100;

    double square = pow(num3, 2);
    printf("%lf\n", square);

    double cube = pow(num3, 3);
    printf("%lf\n", cube);

    int root = sqrt(num3);
    printf("%d\n", root);

    return 0;
}
