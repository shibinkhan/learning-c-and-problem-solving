/*
// slow way

#include<stdio.h>
#include<string.h>

int main() {
    char a[] = "Hello";
    int aLenght = strlen(a);

    char b[] = "World";
    int bLenght = strlen(b);

    int cLenght = aLenght + bLenght;
    char c[cLenght+1];

    for (int i=0; i<aLenght; i++) {
        c[i] = a[i];
    }
    for (int i=0; i<bLenght; i++) {
        c[aLenght+i] = b[i];
    }
    c[cLenght] = '\0';
    printf("%s", c);

    return 0;
}
*/

// fast way

#include<stdio.h>
#include<string.h>

int main() {
    char a[] = "Hello";
    int aLenght = strlen(a);

    char b[] = "World";
    int bLenght = strlen(b);

    //strcat(a, b);

    printf("%s", a);

    return 0;
}
