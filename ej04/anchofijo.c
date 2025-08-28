#include <stdio.h>
#include <stdint.h>

int main() {

    int8_t ochoBits = 8;
    uint8_t u8Bits = -8;

    uint64_t u64Bits = "Hola";

    printf("int8_t(%lu): %d \n", sizeof(ochoBits), ochoBits);
    printf("uint8_t(%lu): %u \n", sizeof(u8Bits), u8Bits);
    printf("uint64_t(%lu): %lu \n", sizeof(u64Bits), u64Bits);

    return 0;
}
/*
    Preguntar por las diferentes opciones para el u64Bits,
    "hola" queda un puntero,
        Rta: Los strings son secuencias en memoria, queda en puntero porque
        nos da la dirección de la inicial.
    'hola' da multi-character character constant
        Rta: porque es "mala práctica", o sea, las comillas simpeles son para chars

        Obs: Al construir los strings, al final se les agrega un caracter especial
        para que al leer el puntero se sepa que es el final.
*/