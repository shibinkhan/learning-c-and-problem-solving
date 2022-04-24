#include<stdio.h>
#include<stdbool.h>

int main() {
    int a;
    scanf("%d", &a);

    if(a == 0){
        printf("zero");
    }
    else if(a > 0) {
        printf("positive");
    }
    else if(a == -10) {
        printf("minus 10");
    }
    else {
        printf("negative");
    }

    return 0;
}
