#include<stdio.h>

int main() {
    /*
    for(int i=1; i<=10; i++){
        if(i%2 == 0) {
            printf("%d is even\n", i);
        }
        else{
            printf("%d is odd\n", i);
        }
    }
    */

    int n;
    printf("Number: ");
    scanf("%d", &n);

    int count;
    for(int i=1; i<=n; i++){
        if(n%i == 0) {
            printf("%d\n", i);
            count++;
        }
    }
    printf("How much Divisors = %d\n", count);
    return 0;
}
