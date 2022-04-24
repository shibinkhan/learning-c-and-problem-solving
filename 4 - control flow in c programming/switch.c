#include<stdio.h>
#include<stdbool.h>

int main() {
    int num1, num2;
    char op;

    printf("Calculation: ");
    scanf("%d %c %d", &num1, &op, &num2);

    int result;
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
    }
    printf("%d", result);

    return 0;
}

