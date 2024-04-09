#include <stdio.h>

int main() {
    int x;

    printf("x input:");
    scanf("%d", &x);

    if (x > 0) {
        printf("x is positive\n");
    } else if (x == 0) {
        printf("x is zero\n");
    } else {
        printf("x is negative\n");
    }

    return 0;
}