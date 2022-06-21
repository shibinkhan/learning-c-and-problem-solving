#include<stdio.h>

int main() {
    char str[100];
    scanf("%s", &str);

    int length = strlen(str);
    int counter[27] = {0};

    for (int i=0; i<length; i++) {
        char val = str[i];
        counter[val-97] ++;
    }
    for (char i='a'; i<='z'; i++) {
        if (counter[i-97] != 0) {
            printf("i = %c, count = %d\n", i, counter[i-97]);
        }
    }

    return 0;
}
