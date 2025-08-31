#include <stdio.h>

int b, c; // static duration, file scope

void f(void) {
    int b, d; // automatic duration, block scope, shadowing de b
}

void g(int a) {
    int c; // automatic duration, block scope, shadowing de c
    {
        int a, d; // automatic duration, block scope, shadowing de a
    }
}