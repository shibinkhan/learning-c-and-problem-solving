// problem C - Tarifa

#include<stdio.h>

int main() {
    int total_limit, months;
    scanf("%d %d", &total_limit, &months);

    int rest = 0;
    for(int i=1; i<=months; i++) {
        int used;
        scanf("%d", &used);

        rest += (total_limit - used);
    }
    int total_rest = total_limit + rest;
    printf("%d", total_rest);

    return 0;
}
