#include<stdio.h>

int main() {
    int mark[3];

    for (int i=0; i<=2; i++) {
        printf("Enter student %d Mark: ", i+1);
        scanf("%d", &mark[i]);

        mark[i] += 5;
        printf("Student %d got %d\n", i+1, mark[i]);
    }

    return 0;
}
