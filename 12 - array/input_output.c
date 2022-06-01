#include<stdio.h>

int main() {
    printf("Enter your Name: ");

    char name[100];
    scanf("%s", name);
    printf("Hello, %s\n...What the fuck do you want?", name);

    gets(name);
    printf("Hello, %s\n...What the fuck do you want?", name);

    // int sz = sizeof(st) / sizeof(st[0]);

    return 0;
}

