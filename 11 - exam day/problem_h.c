#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {

        if (i%2==1) {
            if (i==n) {
                printf("I hate ");
            }
            else {
                printf("I hate that ");
            }
        }

        if (i%2==0) {
            if (i==n) {
                printf("I love ");
            }
            else {
                printf("I love that ");
            }
        }


    }
    printf("it");

    return 0;
}
