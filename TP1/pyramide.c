#include <stdio.h>

int main() {

    int n = 9;
    int coluna = 1;             //para fazer as colunas na piramide de numeros
    int coluna_inversa = 1;     //para fazer as colunas na piramide inversa de espaços
    int contador = 2;           //para fazer os numeros decrescentes

    for (int i = 1 ; i <= n ; i++) {

        for (int k = (n-1) ; k >= coluna_inversa ; k--){
            printf(" ");
        }

        for (int j = 1 ; j <= coluna ; j++){

            if (j<=i){
                printf("%d",j);
            }
            
            else{
                printf("%d",(j-contador));
                contador += 2;
            }
        }

        printf("\n");

        coluna += 2;
        coluna_inversa++;
        contador = 2;
    }

    return 0;

}