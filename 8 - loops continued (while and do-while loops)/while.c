#include<stdio.h>

int main() {
    /*
    // for
    for (int i = 1; i<=5; i++) {
        printf("%d\n", i);
    }

    // while
    int i = 1;
    while (i<=5) {
        printf("%d\n", i);
        i++;
    }
    */
    int money = 0;
    int target = 100;
    while (money < target) {
        printf("Give more money: ");
        int given;
        scanf("%d", &given);
        
        money += given;
        printf("Current money = %d\n", money);
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
