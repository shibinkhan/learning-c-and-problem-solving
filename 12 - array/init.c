#include<stdio.h>

int main() {
    char word[] = {'s', 'h', 'i', 'b', 'i', 'n'};

    int sz = sizeof(word) / sizeof(word[0]);
    for (int i=0; i<sz; i++) {
        printf("%c", word[i]);
    }

    return 0;
}
