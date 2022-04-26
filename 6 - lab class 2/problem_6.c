// ৬। একটি প্রোগ্রাম লিখ যা ধনাত্মক সংখ্যা ইনপুট দিলে ১, শূন্য ইনপুট দিলে ০, আর নাইলে -১ প্রিন্ট করে।

#include<stdio.h>

int main() {
    int number;
    printf("Number: ");
    scanf("%d", &number);

    if(number == 0) {
        printf("0");
    }
    else if(number > 0) {
        printf("1");
    }
    else{
        printf("-1");
    }

    return 0;
}

