#include<stdio.h>

int main() {
    int mark[3];

    for (int i=0; i<=2; i++) {
        printf("Enter student %d Mark:", i);
        scanf("%d", mark[i]);
    }
    printf("%d", mark);

    return 0;
}
