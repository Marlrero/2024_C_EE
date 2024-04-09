#include <stdio.h> // scanf

int main() {
    int num1, num2;
    int x;
    float pi;

    printf("Enter a number: ");
    scanf("%d", &num1); // pointer
    printf("Enter another: ");
    scanf("%d", &num2);
    printf("%d + %d = %d\n", num1, num2, num1 + num2);

    scanf("%d%g", &x, &pi);
    printf("%d\t%g\n", x, pi);
    return 0;
}