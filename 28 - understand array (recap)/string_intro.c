#include<stdio.h>

int main() {
    int str[5] = {'a', 'b', 'c', 'd', 'e'};
    int str2[6] = "abcde";
    int str3[5];

    for (int i=0; i<5; i++) {
        scanf("%c", &str3[i]);
    }
    for (int i=0; i<5; i++) {
        printf("%c", str3[i]);
    }

    return 0;
}
