#include <stdio.h>

// function prototype
int max(int x, int y);
//void print_table(int start, int end);

int main() {
    int x, y, result;

    printf("input: ");
    scanf("%d %d", &x, &y);

    result = max(x, y);
    printf("%d \n", result);

    //print_table(1, 10);
    //print_table(10, 20);

    return 0;
}

// function definition
int max(int x, int y) {
    return x > y ? x : y;
}

/*
void print_table(int start, int end) {
    int i;

    for (i = start; i <= end; i++) {
        printf("%d ", i);
    }
    printf("\n");
}
*/