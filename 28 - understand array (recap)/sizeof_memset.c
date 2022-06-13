#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int array[n];
    // int sz = sizeof(array) / sizeof(array[0]);
    // printf("%d", sz);

    // memset
    memset(array, -1, sizeof(array));
    for (int i=0; i<n; i++) {
        printf("i = %d, value = %d\n", i, array[i]);
    }

    return 0;
}
