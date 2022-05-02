/*
নিচের প্রতিটি প্যাটার্ন আউটপুট দিবে এমন প্রোগ্রাম লিখ।  (Use for loops)

a. 1
   22
   333
   4444

b. *
   **
   ***
   ****

c. 1
   2 3
   4 5 6
   7 8 9 10

==============================================
*/

/*
// 1

#include<stdio.h>

int main() {
    int line = 4;

    for(int i=1; i<=line; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
// b

#include<stdio.h>

int main() {
    int line = 4;

    for(int i=1; i<=line; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/


// c

#include<stdio.h>

int main() {
    int line = 4;
    int number = 1;

    for(int i=1; i<=line; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d ", number);
            number ++;
        }
        printf("\n");
    }

    return 0;
}
