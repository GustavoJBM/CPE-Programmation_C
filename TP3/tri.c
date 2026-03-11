#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 20

void aleatoire_int(int max,int min, int *tableau,int taille){
    for (int i=0 ; i < taille ; i++){
        tableau[i] = (rand() % (max - min + 1)) + min;  
        // Fórmula: int num = (rand() % (max - min + 1)) + min;
    }
}

void sort(int *tableau, int taille){

    for (int i=0 ; i < taille ; i++){

        int maior_indice = i;

        for (int j=0+i ; j < taille ; j++){       //acha o menor dentro da lista tableau.
            if (tableau[j] <= tableau[maior_indice]){ //só trocar o '<' para inverter
                maior_indice = j;
            }
        }

        int temp = tableau[i];
        tableau[i] = tableau[maior_indice];
        tableau[maior_indice] = temp;
    }
}

int main() {

    srand(time(NULL));

    int valores_int[TAMANHO];
    int teste[] = {5,4,3,2,1};

    aleatoire_int(100, 0, valores_int, TAMANHO); //&valores_int[0]

    
    printf("Tableau non trié :\n");
    for (int i=0 ; i < TAMANHO ; i++){
        printf("%d, ",valores_int[i]);    
    }
    printf("\n");
    

    sort(valores_int,TAMANHO); //&valores_int[0]

    printf("Tableau trié :\n");
    for (int i=0 ; i < TAMANHO ; i++){
        printf("%d, ",valores_int[i]);    
    }
    printf("\n");

    return 0;
}
