#include<stdio.h>
#include<string.h>

int main() {
    char name[100] = "Shibin Khan";

    /*
    int length = 0;
    while (name[length] != '\0') {
        length ++;
    }
    printf("Length = %d", length);
    */

    int length = strlen(name);
    printf("Length = %d", length);

    return 0;
}

