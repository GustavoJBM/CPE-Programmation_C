#include <stdio.h>
#include <math.h>
#define NUMERO_DE_BITS 16

int main() {

    int numero = 1024;
    int bin[NUMERO_DE_BITS];
    int tamanho = 0;

    for (int i = 0 ; i < NUMERO_DE_BITS ; i++){             //inicializa tudo em 0
        bin[i] = 0;
    }

    while (tamanho < NUMERO_DE_BITS){

        //printf("%d\n",numero);
        
        bin[tamanho] = numero%2;                            //coloca o resto da divisão na lista
        numero = (int)round(numero/2);                      //divide de fato e arreponda para o menor valor inteiro

        //printf("%d\n",tamanho);
        tamanho++;
    }

    for (int i = (NUMERO_DE_BITS-1) ; i >= 0 ; i-- ){       //imprime a lista ao contrário
        printf("%d",bin[i]);
    }

    printf("\n");

    return 0;

}