#include<stdio.h>

int main() {
    printf("Marks: ");
    int marks;
    scanf("%d", &marks);

    if(marks >= 40) {
        printf("Passed\n");
    }
    else {
        printf("Failed\n");
    }

    return 0;
}