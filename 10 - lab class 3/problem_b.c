#include<stdio.h>

int main() {
    int x = 0;

    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        char a, b, c;
        scanf(" %c%c%c", &a, &b, &c);
        // printf("p: %c%c%c\n", a, b, c);

        if (b=='+') x++;
        else if (b=='-') x--;
    }
    printf("%d", x);

    return 0;
}
