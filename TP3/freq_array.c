#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 100

void aleatoire_int(int max,int min, int *tableau,int taille){
    for (int i=0 ; i < taille ; i++){
        tableau[i] = (rand() % (max - min + 1)) + min;  
        // Fórmula: int num = (rand() % (max - min + 1)) + min;
    }
}

//Em matrizes bidimensionais, a segunda dimensão deve ser declarada na função
void frenquencia_array(int frequencia[][2], int *tableau, int taille) {
    int index = 0;

    for (int i = 0; i < taille; i++) {
        int encontrado_na_posicao = -1;

        //Verifica se o número já está na matriz de contagem
        for (int j = 0; j < index; j++) {
            if (tableau[i] == frequencia[j][0]) {
                encontrado_na_posicao = j;
                break;
            }
        }

        if (encontrado_na_posicao != -1) {
            //Se já existe, incrementa a contagem (coluna 1)
            frequencia[encontrado_na_posicao][1]++;
        } else {
            //Se é novo, adiciona na coluna 0 e define contagem 1 na coluna 1
            frequencia[index][0] = tableau[i];
            frequencia[index][1] = 1;
            index++;
        }
    }

    printf("Valor | Ocorrencias\n");
    for (int i = 0; i < index; i++) {
        printf("  %d   |      %d\n", frequencia[i][0], frequencia[i][1]);
    }
}

int main() {

    srand(time(NULL));

    int teste[TAMANHO];
    
    aleatoire_int(9, 0, teste, TAMANHO);  

    // Inicializa tudo com 0
    int frequencia[TAMANHO][2] = {0};

    frenquencia_array(frequencia, teste, TAMANHO);

    return 0;
}