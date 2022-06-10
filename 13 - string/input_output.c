#include<stdio.h>

int main() {
    printf("Enter your Name: ");

    char name[10];
    //scanf("%s", name);
    //printf("Hello, %s\n...What the fuck do you want?", name);

    fgets(name, 10, stdin);
    printf("Hello, %s\n", name);

    return 0;
}
