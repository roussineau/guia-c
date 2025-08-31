#include <stdio.h>

int main(){
    int arreglo[] = {1, 2, 3, 4};
    size_t size = sizeof(arreglo) / sizeof(int);
    int aux[size];
    size_t rotacion;

    printf("Ingrese el número de espacios a rotar: ");
    scanf("%lu*", &rotacion);

    for (size_t i = 0; i < size; i++)
    {
        aux[i] = arreglo[(i+rotacion)%size];
        printf("%d\n", aux[i]);
    }
    
    // Consultar sobre si es correcta la forma en que lo hice.

    return 0;
}