/*
আমরা for লুপ ব্যাবহার করে ১ থেকে ১০ এর যোগফল বের করেছি। নিচের ধারা গুলোর যোগফল বের করার প্রোগ্রাম লিখ।
a. 1+2+3+.....100
b. 1+3+5+...+29
c. 50 + 49 + 48 + 47 + …… ( প্রথম ২০টি পদ)
d. 2 + 5 + 8 + 11 + 14 + ….. (প্রথম ১০টি পদ)
e. 100 + 97 + 94 + 91 + ….(0 এর চেয়ে বড় পর্যন্ত)
===================================================================
*/

/*
// a: 1+2+3+.....100

#include<stdio.h>

int main() {
    int target = 100;
    int sum;

    for(int i=1; i<=target; i++) {
        printf("Add i = %d, Sum now = %d\n", i, sum);
        sum += i;
    }

    printf("Sum = %d", sum);

    return 0;
}
*/

/*
// b: 1+3+5+...+29

#include<stdio.h>

int main() {
    int target = 29;
    int sum;

    for(int i=1; i<=target; i+=2) {
        sum += i;
        printf("Add i = %d, Sum now = %d\n", i, sum);
    }

    printf("Sum = %d", sum);

    return 0;
}
*/

/*
// c: 50 + 49 + 48 + 47 + …… (প্রথম ২০টি পদ)

#include<stdio.h>

int main() {
    int target = 29;
    int sum;

    for(int i=50, j=1; j<=target; i--, j++) {
        sum += i;
        printf("Add i = %d, Sum now = %d\n", i, sum);
    }

    printf("Sum = %d", sum);

    return 0;
}
*/

/*
// d: 2 + 5 + 8 + 11 + 14 + …..   (প্রথম ১০টি পদ)

#include<stdio.h>

int main() {
    int target = 10;
    int sum;

    for(int i=2, j=1; j<=target; i+=3, j++) {
        sum += i;
        printf("Add i = %d,\t nth = %d,\t Sum now = %d\n", i, j, sum);
    }

    printf("Sum = %d", sum);

    return 0;
}
*/


// e: 100 + 97 + 94 + 91 + …. (0 এর চেয়ে বড় পর্যন্ত)

#include<stdio.h>

int main() {
    int target = 0;
    int sum;

    for(int i=100; i>target; i-=3) {
        sum += i;
        printf("Add i = %d,\t Sum now = %d\n", i, sum);
    }

    printf("Sum = %d", sum);

    return 0;
}
