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

    return 0;
}
