#include<stdio.h>
#include<stdbool.h>

int main() {
    int num1, num2;
    char op;

    printf("Calculation: ");
    scanf("%d %c %d", &num1, &op, &num2);

    int result;
    if(op == '+') {
        result = num1 + num2;
    }
    else if(op == '-') {
        result = num1 - num2;

    }else if(op == '*') {
        result = num1 * num2;

    }else if(op == '/') {
        result = num1 / num2;
    }
    printf("%d", result);

    return 0;
}