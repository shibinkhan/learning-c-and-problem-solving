#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int rooms = 0;
    for (int i=1; i<=n; i++) {
        int p, q;
        scanf("%d %d", &p, &q);

        if ((p+2) <= q) {
            rooms ++;
        }
    }
    printf("%d", rooms);

    return 0;
}
