#include<stdio.h>

int main() {
    int abc;
    scanf("%d", &abc);

    int a = abc / 100;
    int b = (abc / 10) % 10;
    int c = abc % 10;

    return 0;
}
