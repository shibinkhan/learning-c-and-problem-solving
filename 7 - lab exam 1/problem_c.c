#include<stdio.h>

int main() {
    int numbOfTemp;
    scanf("%d", &numbOfTemp);

    int numbOfMinusTemp = 0;
    for(int i=1; i<=numbOfTemp; i++) {
        int temp;
        scanf("%d", &temp);

        if(temp < 0) {
            numbOfMinusTemp++;
        }
    }
    printf("%d", numbOfMinusTemp);

    return 0;
}
