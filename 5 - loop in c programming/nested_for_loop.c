#include<stdio.h>

int main() {
    int height , width;

    printf("Height and Width: ");
    scanf("%d %d", &height, &width);


    for(int i=0; i<width; i++) {
        printf("*");
    }
    printf("\n");

    for(int i=0; i<height-2; i++) {
        printf("*");
        for(int i=0; i<width-2; i++) {
            printf(" ");
        }
        printf("*\n");
    }

    for(int i=0; i<width; i++) {
        printf("*");
    }

    return 0;
}