#include <stdio.h>

int main() {
    int i, size = 0;
    int arr[10]; //10개의 int 타입 값 배열 선언

    for (i = 0; i < 10; i++) {
        arr[i] = i; // 0 ~ 9까지 초기화
        size++;
    }

    arr[3] = 100; // 3번째 위치 100 값 설정
    printf("array of %d items:\n", size);

    // 각 요소 출력
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}