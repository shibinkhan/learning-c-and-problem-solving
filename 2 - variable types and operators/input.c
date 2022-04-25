#include<stdio.h>

int main() {

    int marks_english;
    int marks_math;

    /*

    scanf("%d", &marks_english);

    printf("Input of Math marks: ");
    scanf("%d", &marks_math);
    */

    printf("Input the Marks: ");
    scanf("%d %d", &marks_english, &marks_math);

    int total = marks_english + marks_math;
    printf("Total is %d", total);

    /*
    float speed;
    printf("Input the Speed: ");
    scanf("%f", &speed);
    printf("Speed is %f", speed);
    */
    return 0;
}