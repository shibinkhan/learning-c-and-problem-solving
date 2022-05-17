#include<stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <='Z') {
        printf("Uppercase");
    }
    if (ch >= 'a' && ch <='z') {
        printf("Lowercase");
    }
    if (ch >= '0' && ch <='9') {
        printf("Digit");
    }

    return 0;
}
