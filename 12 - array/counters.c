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
    printf("Avarage = %lf\n", avarage);

    /*
    // slow way
    for (int val=1; val<=5; val++) {
        int count = 0;
        for (int i=0; i<numOfUsers; i++) {
            if (val == ratings[i]) {
                count ++;
            }
        }
        printf("Num %d = %d\n", val, count);
    }
    */

    // fast way
    int count[6] = {0};
    for (int i=0; i<numOfUsers; i++) {
        int x = ratings[i];
        count[x] ++;
    }
    for (int i=1; i<=numOfUsers; i++) {
        printf("Num %d = %d\n", i, count[i]);
    }

    return 0;
}

