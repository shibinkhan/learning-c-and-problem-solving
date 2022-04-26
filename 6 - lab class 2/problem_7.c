// ৭। দুটি সংখ্যা এর মধ্যে বড়টি বের করার জন্য প্রোগ্রাম লিখ।

#include<stdio.h>

int main() {
    int number1, number2;
    printf("Numbers: ");
    scanf("%d %d", &number1, &number2);

    /*
    if(number1 > number2) {
        printf("Max = %d", number1);
        printf("Min = %d", number2);
    }
    else{
        printf("Max = %d", number2);
        printf("Min = %d", number2);
    }
    */

    int max = number1 > number2 ? number1 : number2;
    printf(" Max = %d\n", max);

    int min = number1 < number2 ? number1 : number2;
    printf(" Min = %d", min);

    return 0;
}

