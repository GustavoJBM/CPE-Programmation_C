#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100

typedef struct {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;
} Cor;

void aleatoire_int(int max,int min, Cor *tableau,int taille){
    for (int i=0 ; i < taille ; i++){
        tableau[i].red = (rand() % (max - min + 1)) + min;  
        tableau[i].green = (rand() % (max - min + 1)) + min;  
        tableau[i].blue = (rand() % (max - min + 1)) + min;  
        tableau[i].alpha = 0xff;
        // Fórmula: int num = (rand() % (max - min + 1)) + min;
    }
}

//Função auxiliar: retorna 1 se forem idênticas, 0 caso contrário
int sao_iguais(Cor c1, Cor c2) {
    return (c1.red   == c2.red   && 
            c1.green == c2.green && 
            c1.blue  == c2.blue  && 
            c1.alpha == c2.alpha);
}

void couleur_compteur(Cor *unicas, int *contagem, Cor *tableau, int taille, int *total_distintas) {
    int index = 0;

    for (int i = 0; i < taille; i++) {
        int encontrado_na_posicao = -1;//só para iniciar com um valor não existente

        //Compara a cor atual do tableau com as que já salvamos como únicas
        for (int j = 0; j < index; j++) {// o primeiro sempre vai pular esse
            if (sao_iguais(tableau[i], unicas[j])) { //se achou, retorna a posição que encontrou
                encontrado_na_posicao = j;
                break;
            }
        }

        if (encontrado_na_posicao != -1) {
            contagem[encontrado_na_posicao]++;  //incrementa a contagem da cor que achamos
        } else {
            if (index < TAMANHO) {
                unicas[index] = tableau[i]; //Copia a struct inteira, ja que as duas são "cor"
                contagem[index] = 1;   
                index++;
            }
        }
    }
    *total_distintas = index; //Retorna a quantidade de cores distintas encontradas
}

int main() {

    srand(time(NULL));

    Cor cores[TAMANHO];

    /*
    jeito mais facil e rapido de preencher
    cor[0] = (Cor){0xef, 0x78, 0x12, 0xff};
    cor[1] = (Cor){0xfe, 0x87, 0x21, 0xff};
    cor[2] = (Cor){0xfe, 0x87, 0x21, 0xff};
    */

    aleatoire_int(10, 0, cores, TAMANHO);  

    Cor unicas[TAMANHO];
    int contagem[TAMANHO] = {0};
    int total_distintas = 0;

    couleur_compteur(unicas, contagem, cores, TAMANHO, &total_distintas);

    // Exibição
    for (int i = 0; i < total_distintas; i++) {
        if (contagem[i] > 1){
            printf("Cor RGBA: %02x %02x %02x %02x | Qtd: %d\n", 
            unicas[i].red, unicas[i].green, unicas[i].blue, unicas[i].alpha, contagem[i]);
        }
    }

    return 0;
}