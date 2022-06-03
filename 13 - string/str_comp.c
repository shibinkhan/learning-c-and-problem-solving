/*
// slow way

#include<stdio.h>
#include<string.h>

int main() {
    char a[100], b[100];
    scanf("%s %s", a, b);

    int indx = 0;
    while (a[indx] == b[indx] && a[indx] != '\0' && b[indx] != '\0') {
        indx ++;
    }
    if (a[indx] == '\0' && b[indx] == '\0') {
        printf("Equal");
    }
    else if (a[indx] == '\0' && b[indx] != '\0') {
        printf("A is Smaller");
    }
    else if (a[indx] != '\0' && b[indx] == '\0') {
        printf("B is Smaller");
    }
    else if (a[indx] < b[indx]) {
        printf("A is Smaller");
    }
    else {
        printf("B is Smaller");
    }

    return 0;
}
*/

// fast way

#include<stdio.h>
#include<string.h>

int main() {
    char a[100], b[100];
    scanf("%s %s", a, b);

    int indx = 0;


    return 0;
}
