/*
#include<stdio.h>

int main() {
    const int n;
    scanf("%d", &n);
    int values[n];

    for (int i=0; i<n; i++) {
        values[i] = i+1;

    }
    values[4] *= 5;
    values[6] = values[2] + values[5];

    for (int i=0; i<n; i++) {
        printf("values[%d] = %d\n", i, values[i]);
    }


    return 0;
}
*/

// how to check the size of array.

#include<stdio.h>

int main() {
    const int n;
    scanf("%d", &n);
    int values[n];

    int arraySize = sizeof(values) / sizeof(0);
    printf("%d\n", arraySize);

    return 0;
}
