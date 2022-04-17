/*
6. নিচের কোডটা কি করে বলে তোমার মনে হয়?

#include <stdio.h>
int main ()
{
int x, y;
scanf("%d %d", &x, &y);
printf("%d\n", x/y);
return 0;
}

কোডটাতে 5 0 ইনপুট দিয়ে দেখ তো কি হয়?
*/

#include <stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", x/y);

    return 0;
}

/**
০ দিয়ে কিছুকে ভাগ করা যায় না। চেস্টা করলে undefined বা can not divide by zero আসে। আর এখানে যে এরর টা দেখাচ্ছে এটাকে বলে "runtime error" এই এরর প্রোগ্রাম রান করার সময় ঘটে।
**/
