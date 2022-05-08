#include<stdio.h>

int main() {
    for(int i = 1; i<=5; i++) {
        printf("%d\n", i);
    }

    int i = 1;
    while(i<=5) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

/*
init expression;
while(condition) {
    statements;
    loop expression;
}
for(init expression; condition; loop expression) {
    statements;
}
*/
