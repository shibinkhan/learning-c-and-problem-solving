#include<stdio.h>

int main() {
    int students;
    printf("Enter num of Students: ");
    scanf("%d", &students);
    int mark[students];

    for (int i=0; i<students; i++) {
        printf("Enter student %d Mark: ", i+1);
        scanf("%d", &mark[i]);

        mark[i] += 5;
        printf("Student %d got %d\n", i+1, mark[i]);
    }

    return 0;
}
