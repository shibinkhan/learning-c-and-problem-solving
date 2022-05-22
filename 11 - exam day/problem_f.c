#include<stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // start # / end #
    int right = 4;
    int left = 2;

    for (int i=1; i<=n; i++) {

        // even lines
        if (i%2==0) {

            // right #
            if (right==i) {
                printf("#");
                right += 4;
            }

            // dots
            for (int k=1; k<m; k++) {
                printf(".");
            }

            // left #
            if (left==i) {
                printf("#");
                left += 4;
            }
            printf("\n");
        }

        // odd lines
        else {
            for (int k=1; k<=m; k++) {
                printf("#");
            }
            printf("\n");
        }
    }

    return 0;
}
