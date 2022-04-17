/*
7. একটা প্রোগ্রাম লিখ যেটা তোমার উচ্চতা ইনপুট নিবে ইঞ্চিতে, তারপর সেটাকে ফুট আর ইঞ্চি ফরম্যাট এ আউটপুট দিবে।
Example:
    Enter height is inches: 65
    Your height is 5 feet 5 inches
*/

#include <stdio.h>
int main(){
    printf("Enter your height in inches: ");

    int height_total;
    scanf("%d", &height_total);

    int height_fit = height_total / 12; // 12 inch = 1 fit.
    int height_inches = height_total % 12;

    printf("Your height is %d fit %d inches.", height_fit, height_inches);

    return 0;
}
