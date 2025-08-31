#include <stdio.h>

int main() {

    int altos, bajos;
    printf("Ingrese la primera palabra (32 bits): ");
    scanf("%d", &altos);
    printf("Ingrese la segunda palabra (32 bits): ");
    scanf("%d", &bajos);

    // Movemos los 3 últimos bits del segundo número a los 3 primeros
    bajos <<= 29;
    // Borramos todos los bits del primer número, excepto los 3 primeros
    altos &= 0xE0000000;

    // Si quedaron iguales, entonces los 3 bits más significativos del primero
    // eran iguales a los 3 últimos del segundo.
    char check = (char) (bajos == altos);
    char* veredicto = check ? "iguales" : "distintos";

    printf("Los 3 primeros bits del primero son %s comparados con los 3 últimos del segundo\n", veredicto);
    
    return 0;
}