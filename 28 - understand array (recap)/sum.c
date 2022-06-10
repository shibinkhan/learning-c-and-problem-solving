#include<stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};

    int sum = 0;
    for (int i=0; i<5; i++) {
        // printf("%d ", array[i]);

        sum += array[i];
    }
    printf("%d", sum);

    return 0;
}
