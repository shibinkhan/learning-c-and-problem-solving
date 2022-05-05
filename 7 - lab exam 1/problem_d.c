#include<stdio.h>

int main() {
    int numbOfCalc;
    scanf("%d", &numbOfCalc);

    double totalSum = 0;
    for(int i=1; i<=numbOfCalc; i++) {
        double num1, num2;
        scanf("%lf %lf", &num1, &num2);

        double multi = num1 * num2;
        // printf("%lf\n", multi);
        totalSum += multi;
    }
    printf("%.3lf", totalSum);

    return 0;
}
