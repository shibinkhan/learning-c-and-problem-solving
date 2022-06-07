#include<stdio.h>
#include<stdbool.h>

int main() {
    int year;
    scanf("%d", &year);

    for (int i=year+1;; i++) {
        int curyear = i;

        int fr[10] = {0};
        bool repeat = false;

        while (curyear > 0) {
            int d = curyear%10;
            curyear/=10;
            fr[d] ++;

            if (fr[d] >= 2) {
                repeat = true;
            }
        }
        if (!repeat) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
