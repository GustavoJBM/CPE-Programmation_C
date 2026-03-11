#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatoire_int(int max,int min, int *tableau,int taille){
    for (int i=0 ; i < taille ; i++){
        tableau[i] = (rand() % (max - min + 1)) + min;  
        // Fórmula: int num = (rand() % (max - min + 1)) + min;
    }
}

void aleatoire_float(float max, float min, float *tableau, int taille){
    for (int i=0 ; i < taille ; i++){
        float échelle = (float)rand() / (float)RAND_MAX;
        tableau[i] = min + échelle * (max - min); 
        //Fórmula: float num = min + escala * (max - min);
    }
}

int main() {

    srand(time(NULL));

    int valores_int[10];
    float valores_float[10];

    aleatoire_int(100, 0, valores_int, 10);         //para passar um array em uma função: valores_int = &valores_int[0]
    aleatoire_float(10, 0, valores_float, 10);
          
    //sempre que passar uma array, passar o tamanho também em outra variável, pois a função não sabe onde acaba

    printf("valores aleatórios int: ");
    for (int i=0 ; i < 10 ; i++){
        printf("%d, ",valores_int[i]);    
    }
    printf("\n");

    printf("valores aleatórios float: ");
    for (int i=0 ; i < 10 ; i++){
        printf("%.2f, ",valores_float[i]);    
    }
    printf("\n");

    return 0;
}
