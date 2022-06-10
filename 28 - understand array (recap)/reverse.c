#include<stdio.h>

int main() {
    int array[5] = {1, 2, -3, 0, 5};
    for (int i=4; i>=0; i--) {
        printf("%d ", array[i]);
    }
    return 0;
}
