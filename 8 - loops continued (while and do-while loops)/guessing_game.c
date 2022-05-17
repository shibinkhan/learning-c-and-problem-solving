#include<stdio.h>
#include<stdlib.h>

int main() {
    srand(time(0));
    int hidden = rand()%100+1;
    // printf("%d\n", hidden);
    printf("Guess the number...\n");

    int numbOfGuess = 0;
    while (numbOfGuess < 10) {
        int guess;
        scanf("%d", &guess);

        if (hidden == guess) {
            printf("You are right\n");
            break;
        }
        else if (hidden > guess) {
            printf("Guess larger\n");
        }
        else if (hidden < guess) {
            printf("Guess smaller\n");
        }

        numbOfGuess ++;
    }
    if(numbOfGuess == 10) {
            printf("You Failed\n");
        }

    return 0;
}
