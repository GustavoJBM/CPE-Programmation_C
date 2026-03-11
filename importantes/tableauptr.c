#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 10

void aleatoire_int(int max,int min, int *tableau,int taille){
    printf("valores aleatórios int: \n");
    for (int i=0 ; i < taille ; i++){
        tableau[i] = (rand() % (max - min + 1)) + min;  
        // Fórmula: int num = (rand() % (max - min + 1)) + min;
        printf("%d, ",tableau[i]);
    }
    printf("\n");
}

void multiplicar_int(int *tableau, int taille){

    int *ptr_int = tableau;

    printf("valores multiplcados int: \n");

    for (int i=0 ; i < TAMANHO ; i++){
        if (i % 2 == 0){            //significa que o índice é divisível por 2
            *(ptr_int + i) *= 3;
        }
        printf("%d, ",*(ptr_int + i));
    }

    printf("\n");
}

void aleatoire_float(float max, float min, float *tableau, int taille){

    printf("valores aleatórios float: \n");

    for (int i=0 ; i < taille ; i++){
        float échelle = (float)rand() / (float)RAND_MAX;
        tableau[i] = min + échelle * (max - min); 
        //Fórmula: float num = min + escala * (max - min);
        printf("%.2f, ",tableau[i]);
    }

    printf("\n");
}

void multiplicar_float(float *tableau, int taille){

    float *ptr_float = tableau;

    printf("valores multiplcados float: \n");

    for (int i=0 ; i < TAMANHO ; i++){
        if (i % 2 == 0){            //significa que o índice é divisível por 2
            *(ptr_float + i) *= 3;
        }
        printf("%.2f, ",*(ptr_float + i));
    }

    printf("\n");
}

int main() {

    srand(time(NULL));

    float valores_float[TAMANHO];
    int valores_int[TAMANHO];

    aleatoire_int(100, 0, valores_int, TAMANHO); 
    
    multiplicar_int(valores_int,TAMANHO);

    aleatoire_float(10, 0, valores_float, TAMANHO);

    multiplicar_float(valores_float,TAMANHO);

    return 0;
}
