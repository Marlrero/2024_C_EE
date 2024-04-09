#include <stdio.h>
#define ARR1_SIZE 5
#define ARR2_SIZE 10
void print_array(int arr[], int size); // prototype

int main() {
    int arr1[ARR1_SIZE], arr2[ARR2_SIZE], i;

    for (i = 0; i < ARR1_SIZE; i++) {
        arr1[i] = i;
        arr2[i] = i;
    }

    for (i = ARR1_SIZE; i < ARR2_SIZE; i++) {
        arr2[i] = i;
    }

    print_array(arr1, ARR1_SIZE); // 배열의 이름으로 전달
    print_array(arr2, ARR2_SIZE);

    return 0;
}

void print_array(int arr[], int size) { // definition
    int i;
    for (i = 0; i< size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}