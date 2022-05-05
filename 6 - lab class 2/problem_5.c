#include<stdio.h>

int main() {
    printf("Your Marks: ");
    int marks;
    scanf("%d", &marks);

    if(marks <= 100 && marks >=0) {
        if(marks >= 80) {
            printf("Grade: A+");
        }
        else if(marks >= 70 && marks <=79) {
            printf("Grade: A");
        }
        else if(marks >= 60 && marks <=69) {
            printf("Grade: B");
        }
        else if(marks >= 50 && marks <=59) {
            printf("Grade: C");
        }
        else if(marks >= 40 && marks <=49) {
            printf("Grade: D");
        }
        else {
            printf("Grade: F");
        }
    }
    else {
        printf("Invalid Input");
    }

    return 0;
}
