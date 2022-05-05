#include<stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if(x>=0 && x<=3000) {
        if(x<1200) {
            printf("ABC");
        }
        else{
            printf("ARC");
        }
    }
    return 0;
}
