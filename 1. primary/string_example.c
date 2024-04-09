#include <stdio.h>
#include <string.h> //strlen, strcpy

int main() {
    char str1[10], str2[10];
    int len;

    str1[0] = 'h';
    str1[1] = 'i';
    str1[2] = '\0'; // null character
    len = strlen(str1); // no count null
    printf("%s %d\n", str1, len); // hi 2

    strcpy(str2, str1); // dest src
    printf("%s \n", str2); // hi

    strcpy(str2, "hello");
    printf("%s has %d chars\n", str2, len);

    return 0;
}