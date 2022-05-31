#include<stdio.h>

int main() {
    int numOfUsers;
    printf("Num of Users: ");
    scanf("%d", &numOfUsers);

    int ratings[numOfUsers];
    for (int i=0; i<numOfUsers; i++) {
        scanf("%d", &ratings[i]);
    }

    int sum = 0;
    for (int i=0; i<numOfUsers; i++) {
        // printf("%d ", ratings[i]);
        sum += ratings[i];
    }
    double avarage = (double)sum / numOfUsers;
    printf("%.2lf ", avarage);

    return 0;
}

