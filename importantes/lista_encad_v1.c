#include <stdio.h>
#include <stdlib.h>

typedef struct elemento {
    int valor;
    struct elemento* prox; //ponteiro para algum lugar da memória do TIPO (ELEMENTO*)
}elemento;

//traduzindo: avisar a função que vai receber um ponteiro do tipo (elemento*) que esta aponta para o endereço do primeiro da lista
void inserir(elemento* *primeiro, int numero){
    elemento* novo = malloc(sizeof(elemento));

    novo->valor = numero;
    novo->prox = *primeiro; 

    *primeiro = novo; //estamos modificando o que esta dentro do endereço de (primeiro)
}


void imprimir (elemento* primeiro){
    //Percorrer a lista
    elemento* atual = primeiro;

    while (atual != NULL){
        printf("%d\n",atual->valor);
        atual = atual->prox;
    }
}

int main() {

    elemento* primeiro = NULL; //aponta para o endereço do tipo (elemento*) e dentro disso, tem NULL

    inserir(&primeiro,1);   //para modificar esse valor, preciso passar o endereço DELE
    inserir(&primeiro,2);

    imprimir(primeiro);

    return 0;
}