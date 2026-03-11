#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("Part2\n");
    printf("Limites des entiers\n");
    printf("INT_MIN  = %d\n", INT_MIN);
    printf("INT_MAX  = %d\n", INT_MAX);
    printf("UINT_MAX = %u\n", UINT_MAX);
    printf("LONG_MIN = %ld\n", LONG_MIN);
    printf("LONG_MAX = %ld\n", LONG_MAX);

    printf("\nLimites des flottants\n");
    printf("FLT_MAX  = %e\n", FLT_MAX);   // plus grand float positif
    printf("DBL_MAX  = %e\n", DBL_MAX);   // plus grand double positif

    printf("\nPart3\n");

    int overflow = INT_MAX + 1;  // ultrapassa o limite máximo
    printf("INT_MAX    = %d\n", INT_MAX);
    printf("INT_MAX +1 = %d\n", overflow);  // imprime um número negativo!


    return 0;
}