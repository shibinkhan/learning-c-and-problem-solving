#include<stdio.h>

int main() {
    int num1, num2;
    printf("Give me num1, num2: ");
    scanf("%d %d", &num1, &num2);

    // double num1, num2;
    // printf("Give me num1, num2: ");
    // scanf("%lf %lf", &num1, &num2);

    int sum = num1 + num2;
    printf("Sum = %d\n", sum);

    int diff = num1 - num2;
    printf("Diff = %d\n", diff);

    int multi = num1 * num2;
    printf("Multi = %d\n", multi);

    // double div = num1 / num2;
    // printf("Div = %lf\n", div);

    int remain = num1 % num2;
    printf("Remain = %% %d", remain);

    return 0;
}
