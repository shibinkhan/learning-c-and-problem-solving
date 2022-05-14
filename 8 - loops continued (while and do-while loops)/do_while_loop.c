/*
#include<stdio.h>

int main() {
    int num;

    do { // 1 or true is same
        scanf("%d", &num);
    } while (num%2 != 0);

    printf("Your input: %d", num);

    return 0;
}
*/

#include <stdio.h>

int main() {
  int i = 6;

  do {
    printf("%d\n", i);
    i++;
  } while (i < 5);

  return 0;
}
