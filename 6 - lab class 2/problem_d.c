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

    // way 2
    int A, B, C;
    printf("Amount of waters: ");
    scanf("%d %d %d", &A, &B, &C);

    int spaceLeftIn1 = A - B;
    if(spaceLeftIn1 >= C) {
        printf("0");
    }
    else {
        printf("%d", C-spaceLeftIn1);
    }

    return 0;
}
