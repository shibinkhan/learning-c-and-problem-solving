// ৩। একটি প্রোগ্রাম লিখ যেটি কোন সংখ্যা জোড় না বিজোড় বলতে পারে।

#include<stdio.h>

int main() {
    int number;
    printf("Number: ");
    scanf("%d", &number);

    if(number%2 == 0) {
        printf("even");
    }
    else{
        printf("odd");
    }

    return 0;
}
