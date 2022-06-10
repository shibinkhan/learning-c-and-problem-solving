#include<stdio.h>

int main() {
    int array[5] = {1, 2, -3, 0, 5};

    int max = array[0];
    for (int i=1; i<5-1; i++) {
        // printf("%d ", array[i]);
        if (array[i] > max) {
            max = array[i];
        }
    }
    printf("%d", max);

    return 0;
}
