#include <stdio.h>

int main() {

    int compteur = 0;
    int colunas = 1;

    printf("entre o numero de linhas: ");
    scanf("%d", &compteur);

    if (compteur > 10){
        compteur = 10;
    }

    for (int i = 0 ; i < compteur ; i++){                       //linhas
        
        for (int j = 1 ; j <= colunas ; j++){                   //colunas
            
            if (colunas <= 2 || colunas > (compteur - 1)){      //faz as duas primeiras e a ultima serem *
                printf("*");
            }
            else{
                if (j == 1 || j > (colunas - 1)) {              //garante que o primeiro e o ultimos das linhas intermediarias sejam *
                    printf("*");
                }
                else{
                    printf("#");                                //por fim, imprime # dentro do triangulo retangulo.
                }
            }
        }

        printf("\n");
        colunas++;

    }

    return 0;

}