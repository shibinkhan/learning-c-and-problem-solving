#include<stdio.h>
#include<stdbool.h>

int main() {
    char ch;
    scanf("%c", &ch);


    // or = ||
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("vowel\n");
    }
    else {
        printf("consonant\n");
    }

    return 0;
}

