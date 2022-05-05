#include<stdio.h>

int main() {
    printf("Your Marks: ");
    int marks;
    scanf("%d", &marks);

    if(marks >= 80) {
        printf("Grade: A+");
    }
    else if(marks >= 70 && marks <=79) {
        printf("Grade: A");
    }
    else if(marks >= 60 && marks <=69) {
        printf("Grade: A-");
    }
    else if(marks >= 50 && marks <=59) {
        printf("Grade: B");
    }
    else if(marks >= 40 && marks <=49) {
        printf("Grade: C");
    }
    else if(marks >= 33 && marks <=39) {
        printf("Grade: D");
    }
    else {
        printf("Grade: F");
    }

    return 0;
}
