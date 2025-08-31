#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void)
{
    srand(time(NULL)); // rand() depende de la semilla; es determinístico

    int caras[6] = {0};

    for (int i = 0; i < 60000000; i++) {
        int random = rand() % 6;
        caras[random]++;
    }

    for (int i=0; i<6; i++) {
        printf("Veces que salió %d: %d\n", i+1, caras[i]);
    }

    return 0;
}