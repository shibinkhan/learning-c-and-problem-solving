#include<stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

/*
    if (ch >= 'A' && ch <='Z') {
        printf("Uppercase");
    }
    else if (ch >= 'a' && ch <='z') {
        printf("Lowercase");
    }
    else if (ch >= '0' && ch <='9') {
        printf("Digit");
    }
    else{
        printf("Others");
    }
*/
    // upper to lower. lower to upper
    if (ch >= 'A' && ch <='Z') {
        int position = ch -'A';
        char toLower = position + 'a';
        printf("%c", toLower);
    }
    else{
        printf("Please give a uppercase letter");
    }

    return 0;
}
