#include<stdio.h>

int main() {
    int numb = 10;

    for(int row=1; row<=numb; row++){
        for(int col=1; col<=numb; col++){
            printf("%d\t", row*col);
        }
        printf("\n");
    }


    return 0;
}