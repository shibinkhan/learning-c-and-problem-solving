#include<stdio.h>

int main() {
    char str[] = "Hello";
    char str2[10];

    int length = strlen(str);
    for (int i=0; i<length; i++) {
        str2[i] = str[i];
    }
    str2[length] = '\0';

    printf("%s", str2);

    return 0;
}
