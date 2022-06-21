#include<stdio.h>

int main() {
    char str[5];
    fgets(str, 5, stdin);
    //str[5] = '\0';

    printf("%s", str);

    return 0;
}
