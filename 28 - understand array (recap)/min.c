#include<stdio.h>

int main() {
    int array[5] = {32, 2, 3, 4, 5};

    int min = array[0];
    for (int i=0; i<5; i++) {
        // printf("%d ", array[i]);
        if (array[i] < min) {
            min = array[i];
        }
    }
    printf("%d", min);

    return 0;
}
