#include<stdio.h>
#include<stdbool.h>

int main() {
    while(true) {
        int input;
        scanf("%d", &input);

        if(input != 0 && input != 1) {
            break;
        }
        printf("Input: %d\n", input);
    }

    return 0;
}
