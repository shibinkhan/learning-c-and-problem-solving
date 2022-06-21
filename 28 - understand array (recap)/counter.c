#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    scanf("%s", &str);

    int length = strlen(str);
    int counter[27] = {0};

    for (int i=0; i<length; i++) {
        char val = str[i];
        counter[val-'a'] ++;
    }
    for (char i='a'; i<='z'; i++) {
        if (counter[i-'a'] != 0) {
            printf("i = %c, count = %d\n", i, counter[i-'a']);
        }
    }

    return 0;
}
