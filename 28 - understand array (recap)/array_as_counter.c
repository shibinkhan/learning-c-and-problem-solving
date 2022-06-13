#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &array[i]);
    }

    int count1 = 0;
    int count2 = 0;

    for (int i=0; i<n; i++) {
        if (array[i] == 1) {
            count1 ++;
        }
        if (array[i] == 2) {
            count2 ++;
        }
    }


    return 0;
}
