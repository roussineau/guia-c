#include <stdio.h>

int factorial(int n); // prototipo o declaración de función

int main() {
    int n;
    printf("Calcular factorial de: ");
    scanf("%d", &n);
    while (n < 0) {
        printf("Número inválido, por favor ingrese uno no negativo: ");
        scanf("%d", &n);
    }

    int ret = factorial(n);
    printf("%d\n", ret);

    return 0;
}

int factorial(int n) {
    int fact = 1;
    while (n > 1) {
        fact *= (n--);
    }
    return fact;
}