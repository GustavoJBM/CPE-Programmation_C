#include <stdio.h>

int main() {

    char palavra1[] = "Hello ";
    char palavra2[] = "World!";

    char final[100] = "";

    int tamanho = sizeof(palavra1) + sizeof(palavra2);

    for (int i=0 ; i < sizeof(palavra1) ; i++){
        final[i] = palavra1[i];
    }

    for (int i=0 ; i < sizeof(palavra2) ; i++){
        final[sizeof(palavra1) + i] = palavra2[i];
    }

    printf("Frase concatenada: ");

    for (int i=0 ; i < tamanho ; i++){
        printf("%c",final[i]);
    }

    printf("\nTamanho da frase: %d",tamanho-2);
    printf("\n");

    return 0;
}