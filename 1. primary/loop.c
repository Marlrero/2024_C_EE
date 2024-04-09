#include <stdio.h>

int main(void)
{
    int i = 1;

    while (i <= 15) // 1 ~ 15까지 번호
    {
        printf("%d ", i++);
    }
    printf("\n");

    i = 1;
    do {
        printf("%d ", i++);
    } while (i <= 15);
    printf("\n");
    
    for (i = 1; i <= 15; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}