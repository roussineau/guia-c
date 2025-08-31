#include <stdio.h>

int main() {

    int a = 0, b = 0;

    int c = a++;
    printf("a++ primero devuelve y luego incrementa. Por eso c = %d, ", c);
    printf("pero si miro el valor de a es %d.\n", a);

    int d = ++b;
    printf("En cambio, ++b primero incrementa y luego devuelve. Por eso d = %d ", d);
    printf("se corresponde con el valor de b, que es %d.\n", b);

    return 0;
}