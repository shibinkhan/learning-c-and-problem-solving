#include<stdio.h>

int main() {
    int price;
    int resultOfExam = 90;
    int result_of_exam2 = 80;
    int combo;
    price = 20 + 40 - 5;
    combo = price + resultOfExam;

    float temparature = 34.51;

    printf("%d\n", price);
    printf("%d\n", resultOfExam);
    printf("%f", temparature);
    printf("my result is %d, wrong is %d", result_of_exam2, result_of_exam2 - 10);
    return 0;
}