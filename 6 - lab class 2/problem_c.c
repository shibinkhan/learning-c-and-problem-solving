// problem C - Tarifa

#include<stdio.h>

int main() {
    int total_limit, months;
    scanf("%d %d", &total_limit, &months);

    int rest = 0;
    for(int i=1; i<=months; i++) {
        int used;
        scanf("%d", &used);

        int month_limit = total_limit + rest;
        rest = month_limit - used;

        // printf("Limit= %d, Used= %d, Rest= %d\n", month_limit, used, rest);
    }
    int final_limit = total_limit + rest;
    printf("%d", final_limit);

    return 0;
}

/*
//way 2
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
*/
