#include <stdio.h> // printf

int main() {
    char ch = 'A';
    
    printf("Name: %s,  Info:\n", "Viljay");
    printf("\tAge: %d \t Ht: %g\n", 20, 5.9);
    printf("\tYear: %d \t Dorm: %s\n", 3, "Alice Paul");

    printf("ch value is %d which is the ASCII value of %c\n", ch, ch);
    ch = 99;
    printf("ch value is %d which is the ASCII value of %c\n", ch, ch);

    return 0;
}