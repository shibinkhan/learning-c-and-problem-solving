// ৭। দুটি সংখ্যা এর মধ্যে বড়টি বের করার জন্য প্রোগ্রাম লিখ।

#include<stdio.h>

int main() {
    /*
    //way 1
    int bottle1_A, bottle1_B, bottle2_C;
    printf("Amount of waters: ");
    scanf("%d %d %d", &bottle1_A, &bottle1_B, &bottle2_C);

    int combine = bottle1_B+bottle2_C;
    int left = 0;
    if(combine >= bottle1_A) {
        left += combine - bottle1_A;
    }
    printf("%d", left);
    */

    /*
    // way 2
    int A, B, C;
    printf("Amount of waters: ");
    scanf("%d %d %d", &A, &B, &C);

    int spaceLeftIn1 = A - B;
    int remainInBottle2 = C - spaceLeftIn1;

    if(spaceLeftIn1 >= C) {
        printf("0");
    }
    else {
        printf("%d", remainInBottle2);
    }
    */

    // way 3
    int A, B, C;
    printf("Amount of waters: ");
    scanf("%d %d %d", &A, &B, &C);

    int spaceLeftIn1 = A - B;
    int pour = spaceLeftIn1 < C ? spaceLeftIn1 : C;
    int remainInBottle2 = C - pour;

    printf("%d", remainInBottle2);

    return 0;
}
