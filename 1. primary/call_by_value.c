#include <stdio.h>

void test(int a[], int size) {
    if (size > 3)
        a[3] = 8; // 직접 변경이 가능함 (pointer)
    
    size = 2; // 변경해도 아무 의미 없음
}

int main() {
    int arr[5], n = 5, i;

    for (i = 0; i < n; i++)
        arr[i] = i;

    printf("%d %d \n", arr[3], n); // 3 5
    
    test(arr, n);
    printf("%d %d \n", arr[3], n); // 8 5

    return 0;
}