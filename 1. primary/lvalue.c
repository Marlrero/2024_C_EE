#include <stdio.h>

struct studentT {
    char name[32]; // 학생 이름
    int age;       // 나이
    float gpa;     // 학점(Grade Point Average)
    int grad_yr;   // 졸업 연도(Graduate year)
};

int main() {
    struct studentT student1, student2;
    int x;
    float gpa;
    char arr[10], ch;

    x = 10;              // 유효
    ch = 'm';            // 유효
    student1.age = 20;   // 유효
    student2 = student1; // 유효
    arr[3] = ch;         // 유효
    /*
    x + 1 = 8;      // 유효하지 않음
    arr = "hello";  // 유효하지 않음 (정적 배열 주소 변경 불가)
                    // strcpy를 활용해 문자열값 복사 가능
    
    student1.name = student2.name; 
                    // 유효하지 않음 (정적 배열 주소 변경 불가)
    */
    return 0;
}