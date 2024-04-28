#include <stdio.h>
#include <string.h>

struct studentT {
    char name[64]; // 학생 이름
    int age;       // 나이
    float gpa;     // 학점(Grade Point Average)
    int grad_yr;   // 졸업 연도(Graduate year)
};

// 함수 원형(prototype)
int checkId(struct studentT s, int min_age);

int main() {
    int can_vote;
    struct studentT student;

    strcpy(student.name, "Ruth");
    student.age = 17;
    student.gpa = 3.5;
    student.grad_yr = 2021;

    can_vote = checkId(student, 18);
    if (can_vote) {
        printf("%s is %d years old and can vote.\n",
                student.name, student.age);
    } else {
        printf("%s is only %d years old and can't vote.\n",
                student.name, student.age);
    }

    return 0;
}

int checkId(struct studentT s, int min_age) {
    int ret = 1; // true 초기화

    if (s.age < min_age) {
        ret = 0; // false
        // 나이 변경
        s.age = min_age + 1;
    }

    printf("%s is %d years old.\n", s.name, s.age);
    
    return ret;
}