/*
নিচের প্রতিটি প্যাটার্ন আউটপুট দিবে এমন প্রোগ্রাম লিখ।  (Use for loops)

 1
 22
 333
 4444

*
**
***
****

1
2 3
4 5 6
7 8 9 10

==============================================
*/

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
