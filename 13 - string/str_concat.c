#include<stdio.h>
#include<string.h>

int main() {
    char a[] = "Hello";
    int aLenght = strlen(a);

    char b[] = "World";
    int bLenght = strlen(b);

    int cLenght = aLenght + bLenght + 1;
    char c[cLenght];




    return 0;
}
