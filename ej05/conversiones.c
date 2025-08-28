#include <stdio.h>

// int main() {

//     enum Color {RED = 15, GREEN, BLUE};
//     // Aunque parezca que estamos definiendo "palabras", en realidad estamos
//     // definiendo CONSTANTES ENTERAS CON VALORES ASOCIADOS.
//     enum Color c = RED;
//     c = 7;
//     // RED = 10; Esto nos daría error porque RED es constante
//     printf("%d\n", c);
//     printf("%d\n", GREEN);
//     printf("%d\n", BLUE);

//     return 0;
// }

int main() {
    float vfloat = 0.1;
    double vdouble = 0.1;

    int fint = (int) vfloat;
    int dint = (int) vdouble;

    printf("El valor como float es %f\n", vfloat);
    printf("El valor como double es %lf\n", vdouble);
    printf("El valor como int casteado de float es %d\n", fint);
    printf("El valor como int casteado de double es %d\n", dint);

    return 0;
}
