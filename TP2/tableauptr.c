#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 10

int main() {

    srand(time(NULL));

    float valores_float[TAMANHO];
    int valores_int[TAMANHO];

    float *ptr_float = valores_float;
    int *ptr_int = valores_int;

    printf("valores aleatórios int: \n");
    for (int i=0 ; i < TAMANHO ; i++){

        valores_int[i] = (rand() % (100 - 0 + 1)) + 0; // Fórmula: int num = (rand() % (max - min + 1)) + min;

        printf("%d, ",valores_int[i]);}
    printf("\n");
    
    printf("valores multiplcados int: \n");
    for (int i=0 ; i < TAMANHO ; i++){
        if (i % 2 == 0){            //significa que o índice é divisível por 2
            *(ptr_int + i) *= 3;
        }
        printf("%d, ",*(ptr_int + i));}
    printf("\n");

    printf("valores aleatórios float: \n");
    for (int i = 0; i < TAMANHO; i++) {
        // 1. Gera fração entre 0 e 1
        float escala = (float)rand() / (float)RAND_MAX;
        
        // 2. Aplica o intervalo
        valores_float[i] = 1.0 + escala * (10.0 - 1.0); //Fórmula: float num = min + escala * (max - min);


        printf("%.2f, ",valores_float[i]);}
    printf("\n");

    printf("valores multiplcados float: \n");
    for (int i=0 ; i < TAMANHO ; i++){
        if (i % 2 == 0){            //significa que o índice é divisível por 2
            *(ptr_float + i) *= 3;
        }
        printf("%.2f, ",*(ptr_float + i));}
    printf("\n");

    return 0;
}
