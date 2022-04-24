#include<stdio.h>
#include<stdbool.h>

int main() {
    printf("Year for Leap year test: ");
    int year;
    scanf("%d", &year);

    bool is_leap_year = (year%4 == 0) && (year%100 != 0 || year%400 == 0);
    if(is_leap_year) {
        printf("leap year\n");
    }
    else {
        printf("not leap year\n");
    }

    return 0;
}

/*
শর্তঃ
১। ৪ দিয়ে ভাগ দেওয়া যায়, ভাগশেষ থাকবে না
২। ১০০ দিয়ে ভাগ দেওয়া যাবে না, ভাগশেষ থাকবে
৩। ব্যাতিক্রমঃ ৪০০ এর গুনিতক হলে
*/
