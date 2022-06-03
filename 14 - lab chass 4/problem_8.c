// 8. Write a C program to find reverse of a given string.

#include<stdio.h>

int main() {
    int sz = 100;
    char str[sz];
    scanf("%s", str);

    int length = strlen(str);
    // printf("%d", length);

    char result[sz];

    for (int i=0; i<length; i++) {
        result[i] = str[length-i];
    }
    result[length+1] = '\0';

    printf("%s", result);
    printf("%d", strlen(result));

    return 0;
}
