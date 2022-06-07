// fast way

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int points[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &points[i]);
    }

    int ans = 0;
    int minValue = points[0];
    int maxValue = points[0];

    for (int i=1; i<n; i++) {
        if (points[i] > maxValue || points[i] < minValue) {
            ans ++;
        }
        if (points[i] > maxValue) {
            maxValue = points[i];
        }
        if (points[i] < minValue) {
            minValue = points[i];
        }
    }
    printf("%d", ans);

    return 0;
}

/*
// slow way

#include<stdio.h>
#include<stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    int points[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &points[i]);
    }

    int ans = 0;
    for (int i=0; i<n; i++) {
        if (i==0) continue;

        bool max = true, min = true;

        for (int j=0; j<i; j++) {
            if (points[i] >= points[j]) {
                min = false;
            }
            if (points[i] <= points[j]) {
                max = false;
            }
        }
        if (min == true || max == true) {
            ans ++;
        }
    }
    printf("%d", ans);

    return 0;
}
*/

/*
// my own wrong way

#include<stdio.h>
#include<stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    int points = 0;
    int temp = 0;
    for (int i=0; i<n; i++) {
        int point;
        scanf("%d", &point);

        if (point > temp) {
            points ++;
        }
        temp = point;
    }

    printf("%d", points-1);

    return 0;
}
*/
