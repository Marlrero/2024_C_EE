#include <stdio.h>

int main() {
    int year;

    printf("year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("leap year");
    else
        printf("no leap year");

    return 0;
}