#include<stdio.h>
#include<stdbool.h>

int main() {
    printf("Total Subjects: ");
    int totalSubjects;
    scanf("%d", &totalSubjects);

    bool failed = false;
    bool input = true;

    double totalGradePoint = 0;
    for(int i=1; i<=totalSubjects; i++) {
        printf("Marks of Subject %d: ", i);
        int marks, gradePoint;
        canf("%d", &marks);

        // grading
        if(marks <= 100 && marks >=0) {
            if(marks >= 80) {
                printf("Grade: A+\n");
                gradePoint = 5;
            }

            else if(marks >= 70 && marks <=79) {
                printf("Grade: A\n");
                gradePoint = 4;
            }

            else if(marks >= 60 && marks <=69) {
                printf("Grade: B\n");
                gradePoint = 3;
            }

            else if(marks >= 50 && marks <=59) {
                printf("Grade: C\n");
                gradePoint = 2;
            }
            
            else if(marks >= 40 && marks <=49) {
                printf("Grade: D\n");
                gradePoint = 1;
            }
            else {
                printf("Grade: F\n");
                gradePoint = 0;
                failed = true;
            }
            totalGradePoint +=gradePoint;
            printf("Grade Point = %d\n", gradePoint);
        }
        else {
            input = false;
        }
    }

    // final outputs
    if(input == false) {
        printf("Wrong Input");
    }
    else if(failed == true) {
        printf("You're failed, GPA = 0.00");
    }
    else if(failed == false) {
        double gpa = (double)totalGradePoint / totalSubjects;
        printf("Passed, Total GPA = %.2lf", gpa);
    }

    return 0;
}
