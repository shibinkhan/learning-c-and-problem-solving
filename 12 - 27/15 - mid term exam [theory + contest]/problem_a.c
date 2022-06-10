#include<stdio.h>
#include<string.h>

int main() {
    char un[101];
    scanf("%s", un);
    int length = strlen(un);

    int nums[length];
    for (int i=0; i<length; i++) {
        nums[i] = un[i];
    }
    int ans = 0;
    for (int i=0; i<length; i++) {
        int current = nums[i];

        for (int j=0; j<length; j++) {
            int compare = nums[j];

            if (j==i) continue;
            if (current == compare) {
                ans ++;
            }
        }
    }

    int distinct = length - ans;

    if (distinct%2 == 0) {
        printf("CHAT WITH HER!");
    }
    else {
        printf("IGNORE HIM!");
    }

    return 0;
}

/*
// simplified

#include<stdio.h>
#include<string.h>

int main() {
    char un[101];
    scanf("%s", un);
    int length = strlen(un);

    int ans = 0;
    for (int i=0; i<length; i++) {
        for (int j=0; j<length; j++) {
            if (j==i) continue;
            if (un[i] == un[j]) {
                ans ++;
            }
        }
    }

    int distinct = length - ans;
    if (distinct%2 == 0) {
        printf("CHAT WITH HER!");
    }
    else {
        printf("IGNORE HIM!");
    }

    return 0;
}
*/
