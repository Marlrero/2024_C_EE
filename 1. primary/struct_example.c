#include <stdio.h>
#include <string.h> // strcpy

// 구조체 타입 정의
struct studentT {
    char name[64]; // 학생 이름
    int age;       // 나이
    float gpa;     // 학점(Grade Point Average)
    int grad_yr;   // 졸업 연도(Graduate year)
};

int main() {
    // 구조체 타입 변수 선언
    struct studentT student1, student2;

    // 변수 필드 할당 (값 접근)
    strcpy(student1.name, "Taejun Lee");
    student1.age = 24 + 2;
    student1.gpa = 4.4;
    student1.grad_yr = 2020;
    student2.grad_yr = student1.grad_yr;

    // printf로 출력
    printf("name: %s age: %d gpa: %g year: %d\n",
            student1.name, student1.age, student1.gpa, student1.grad_yr);

    // 구조체 변수와의 복사
    student2 = student1;
    strcpy(student2.name, "Wonjun Lee");

    printf("name: %s age: %d gpa: %g year: %d\n",
            student2.name, student2.age, student2.gpa, student2.grad_yr);

    // 구조체 변수의 sizeof 연산자
    printf("Number of bytes in struct studentT: %lu \n", sizeof(struct studentT));

    return 0;
}