// wright a program that find the n th fibonacchi numbers.

#include<stdio.h>

int main() {
    int n;
    printf("n: ");
    scanf("%d", &n);

    int nums[n];

    nums[0] = 0;
    nums[1] = 1;

    for (int i=2; i<n; i++) {
        nums[i] = nums[i-2] + nums[i-1];
    }
    for (int i=0; i<n; i++) {
        printf("Num %d = %d\n", i+1, nums[i]);
    }

    return 0;
}
