#include<stdio.h>

int main() {
    int cases;
    scanf("%d", &cases);

    for(int i=1; i<=cases; i++) {
        int normal_rev;
        int advert_rev;
        int advert_cost;

        scanf("%d %d %d", &normal_rev, &advert_rev, &advert_cost);
        int advert_profit = advert_rev - advert_cost;

        if(normal_rev < advert_profit) {
            printf("advertise\n");
        }
        else if(normal_rev == advert_profit) {
            printf("does not matter\n");
        }
        else {
            printf("do not advertise\n");
        }
    }
    return 0;
}
