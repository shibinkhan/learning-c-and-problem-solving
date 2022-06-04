// Write a C program to find reverse of a given array of numbers.

// way 1
#include<stdio.h>

int main() {
    int length;
    scanf("%d", &length);

    int array[length];
    for (int i=0; i<length; i++) {
        scanf("%d", &array[i]);
    }

    for (int i=0, j=length-1; i<j; i++, j--) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;

        /*
        for (int i=0; i<length; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
        */
    }

    for (int i=0; i<length; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

/*
//way 2
#include<stdio.h>

int main() {
    int length;
    scanf("%d", &length);

    int array[length];
    for (int i=0; i<length; i++) {
        scanf("%d", &array[i]);
    }

    int array2[length];
    for (int i=0; i<length; i++) {
        array2[i] = array[i];
    }

    for (int i=0; i<length; i++) {
        array[i] = array2[length-(i+1)];
        printf("%d ", array[i]);
    }

    return 0;
}
*/

/*
// way 3
#include<stdio.h>

int main() {
    int length;
    scanf("%d", &length);

    int array[length];
    for (int i=0; i<length; i++) {
        scanf("%d", &array[i]);
    }
    for (int i=length-1; i>=0; i--) {
        printf("%d ", array[i]);
    }

    return 0;
}
*/
