#include <stdio.h>

int global; // valor: 0

int main() {

    int global = 1; // Probar cambiándole el nombre a global.

    if (global) {
        printf("Hay shadowing. global = %d, local = %d\n", global, global);
    } else {
        printf("No hay shadowing. global = %d, local = %d\n", global, global);
    }

    return 0;
}