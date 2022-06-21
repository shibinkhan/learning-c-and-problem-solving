#include<stdio.h>

int main() {
    char str[5] = {'a', 'b', 'c', 'd', 'e'};
    char str2[6] = "abcde";
    char str3[5];

    for (int i=0; i<5; i++) {
        scanf("%c", &str3[i]);
    }
    for (int i=0; i<5; i++) {
        printf("%c", str3[i]);
    }

    return 0;
}
