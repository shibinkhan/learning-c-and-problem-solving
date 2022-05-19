#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int A = 0;
    int D = 0;
    for (int i=1; i<=n; i++) {
        char s;
        scanf(" %c", &s);

        if (s=='A') {
            A ++;
        }
        if (s=='D') {
            D ++;
        }
    }

    if (A == D) {
        printf("Friendship");
    }
    else if (A > D) {
        printf("Anton");
    }
    else if (A < D) {
        printf("Danik");
    }

    return 0;
}
