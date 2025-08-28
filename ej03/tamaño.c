#include <stdio.h>

int main() {

    char c = 'c';
    unsigned char uc = 'u';
    short s = -5000;
    unsigned short us = 5000;
    int i = -123456;
    unsigned ui = 123456;
    long l = -1234567890;
    unsigned long ul = 1234567890;

    printf("char(%lu): %c \n", sizeof(c), c);
    printf("unsigned char(%lu): %c \n", sizeof(uc), uc);
    printf("short(%lu): %d \n", sizeof(s), s);
    printf("unsigned short(%lu): %d \n", sizeof(us), us);
    printf("int(%lu): %d \n", sizeof(i), i);
    printf("unsigned(%lu): %d \n", sizeof(ui), ui);
    printf("long(%lu): %ld \n", sizeof(l), l);
    printf("unsigned long(%lu): %ld \n", sizeof(ul), ul);

    return 0;
}