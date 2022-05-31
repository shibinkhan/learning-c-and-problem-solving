#include<stdio.h>

int main() {
    int numOfUsers;
    scanf("%d", &numOfUsers);

    int ratings[numOfUsers];
    for (int i=0; i<numOfUsers; i++) {
        int rating;
        scanf("%d", &rating);
        ratings[i] = rating;
    }
    for (int i=0; i<numOfUsers; i++) {
        printf("%d", ratings[i]);
    }

    return 0;
}

