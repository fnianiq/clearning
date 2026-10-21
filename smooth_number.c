#include <stdio.h>

int main(void) {
    long long x;
    scanf("%lld", &x);

    int r = 0;
    int z = 0;

    if (x == 1) {
        printf("Yes\n");
    } else {
        while (r == 0) {
            if (x % 2 == 0) {
                x = x / 2;
            } else {
                r = x % 2;
            }
        }

        while (x != 1) {
            if (x % 3 == 0) {
                x = x / 3;
            } else {
                printf("No\n");
                z = 1;
                break;
            }
        }

        if (z == 0) {
            printf("Yes\n");
        }
    }

    return 0;
}
