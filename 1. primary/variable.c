#include <stdio.h>

int main() {
    // block 상단에 변수 정의가 관례
    int x; // int 타입 x 변수 선언
    int i, j, k; // 같은 타입이면 여러 개 선언 가능

    char letter; // 1바이트 정수값, ASCII 문자 저장(숫자 인코딩)
    // 다른 언어에서 string과는 다름!

    float f; // float 타입 f 변수 선언 (단정도 실수 타입)
    double d; // 배정도 실수 타입

    // 모든 변수는 정의 후 사용 가능
    x = 7; // x에 7 저장, 값 사용하기 전 변수 초기화해야 함
    k = x + 2; // 표현식에서 x 값 사용

    letter = 'A'; // 작은따옴표가 문자, 이는 ASCII 코드
    letter = letter + 1; // 'B'

    d = 3.141592;

    f = 11 / 2.0; // 5.5
    j = 11 / 2; // 5 (int는 소수점 이하 버림)
    x = k % 2; // mod 연산, 1

    return 0;
}