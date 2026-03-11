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

int main() {

    srand(time(NULL));

    Cor cores[TAMANHO];

    aleatoire_int(100, 0, cores, TAMANHO);  

    for (int i = 0; i < TAMANHO; i++) {
        printf("Cor RGBA: %02x %02x %02x %02x\n", 
                cores[i].red, cores[i].green, cores[i].blue, cores[i].alpha);
    }

    return 0;
}