#include <stdio.h>

int main()
{
    int mensaje_secreto[] = {
        116, 104, 101, 32, 103, 105, 102, 116, 32, 111, 102, 32,
        119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101,
        32, 103, 105, 102, 116, 32, 111, 102, 32, 100, 101, 99,
        101, 112, 116, 105, 111, 110, 32, 97, 110, 100, 32, 105,
        108, 108, 117, 115, 105, 111, 110};

    size_t length = sizeof(mensaje_secreto) / sizeof(int);
    // size_t = long unsigned int

    char decoded[length];

    for (size_t i = 0; i < length; i++) {
        decoded[i] = (char) (mensaje_secreto[i]);
    }

    for (size_t i = 0; i < length; i++) {
        printf("%c", decoded[i]);
        if (i == length - 1) {
            printf("\n");
        }
    }

    return 0;
}

/*
    El length se calcula así porque la longitud de los arreglos es fija
    (no se puede aumentar ni decrementar), por lo que esto nos permite
    conseguir la cantidad de palabras exactas en base a la longitud de los
    de los elementos que contiene, y su cantidad.

    Si el mensaje secreto tuviera un tamaño distinto, gracias a calcular el
    length de esa forma no tendríamos que modificar nada de la fórmula.
*/