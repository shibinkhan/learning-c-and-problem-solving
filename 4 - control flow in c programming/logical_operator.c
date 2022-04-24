#include<stdio.h>
#include<stdbool.h>

int main() {
    int a;
    scanf("%d", &a);

    /*
    // and = &&
    if(a > 0 && a > 10) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }
    */

    /*
    // or = ||
    if(a > 0 || a > 10) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }
    */


    // not = !
    if(!(a > 0 && a > 10)) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }

    return 0;
}
