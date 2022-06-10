// 8. Write a C program to find reverse of a given string.

#include<stdio.h>

int main() {
    int sz = 100;
    char input[sz];
    scanf("%s", input);

    int lengthInput = strlen(input);
    input[lengthInput] = '\0';

    char result[sz];

    for (int i=0; i<lengthInput; i++) {
        result[i] = input[lengthInput-(i+1)];
    }
    result[lengthInput] = '\0';

    printf("%s", result);

    return 0;
}
