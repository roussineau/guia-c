#include <stdio.h>

int main() {

    char a = 5, b = 3, c = 2, d = 1;

    char res1 = a + b * c / d;

    char res2 = a % b;

    char res3a = a == b;
    char res3b = a != b;
    
    // Comparaciones bit a bit; devuelve el resultado charerpretado con signo
    char res4a = a & b;
    char res4b = a | b;
    
    char res5 = ~a;
    
    char res6a = a && b;
    char res6b = a || b;
    
    char res7 = a << 1;
    
    char res8 = a >> 1;

    // Para no alterar las demás operaciones en cadena, hice variables
    // separadas, pero esta no es la idea de los operadores con = como sufijo.
    char a9 = a;
    char b9 = b;
    char res9a = a9 += b9;
    char res9b = a9 -= b9;
    char res9c = a9 *= b9;
    char res9d = a9 /= b9;
    char res9e = a9 %= b9;

    printf("%d + %d * %d / %d = %d\n\n", a, b, c, d, res1);
    printf("%d %% %d = %d\n\n", a, b, res2);
    printf("%d == %d = %d\n", a, b, res3a);
    printf("%d != %d = %d\n\n", a, b, res3b);
    printf("%d & %d = %x\n", a, b, res4a);
    printf("%d | %d = %x\n\n", a, b, res4b);
    // Importante: a pesar de que hayamos declarado que a es un char,
    // los operadores aritméticos promocionan los operandos más pequeños
    // que int a int. Por eso acá nos salen 4 bytes en lugar de solo 1:
    printf("~%d = %x = %d\n\n", a, res5, res5);
    printf("%d && %d = %d\n", a, b, res6a);
    printf("%d || %d = %d\n\n", a, b, res6b);
    printf("%d << 1 = %x = %d\n\n", a, res7, res7);
    printf("%d >> 1 = %x\n\n", a, res8);
    printf("%d += %d = %d\n", a, b, res9a);
    printf("%d -= %d = %d\n", a, b, res9b);
    printf("%d *= %d = %d\n", a, b, res9c);
    printf("%d /= %d = %d\n", a, b, res9d);
    printf("%d %%= %d = %d\n", a, b, res9e);

    return 0;
}