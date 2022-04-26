// ৭। দুটি সংখ্যা এর মধ্যে বড়টি বের করার জন্য প্রোগ্রাম লিখ।

#include<stdio.h>

int main() {
    int number1, number2;
    printf("Numbers: ");
    scanf("%d %d", &number1, &number2);

    if(number1 > number2) {
        printf("%d", number1);
    }
    else{
        printf("%d", number2);
    }

    return 0;
}

