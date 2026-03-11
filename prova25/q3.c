#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct elemento {
    void* data;
    struct elemento* prox; //ponteiro para algum lugar da memória do TIPO (ELEMENTO*)
}elemento;

typedef struct lista {
    struct elemento* primeiro;
}lista;


void init_lista(lista* l){
    l->primeiro = NULL;
}

void imprimir(lista* l){
    elemento* atual = l->primeiro;

    while (atual != NULL){
        printf("%s\n",(char *)atual->data); //converte o void* para char*. %s ja desreferencia o char.
        atual = atual->prox;
    }
}

void inserir(lista* l, char* str){

    elemento* novo = malloc(sizeof(elemento));

    char* p = malloc(strlen(str)+1); //aloca espaço para um char (+ 1 parar o /0)
    strcpy(p, str);
    novo->data = p;                  //o void* aponta para um char*

    novo->prox = l->primeiro;
    l->primeiro = novo;
}

void liberar_lista(lista* l){
    
    elemento* atual = l->primeiro;

    while (atual != NULL){
        elemento* temp = atual->prox; //salva o próximo
        free(atual->data);
        free(atual);                  //libera o atual
        atual = temp;                 //avança
    }    
}





int main() {

    lista minha_lista; 

    init_lista(&minha_lista); 

    inserir(&minha_lista,"Lyon");//passa o endereço do primeiro char, ou seja, &char[0]
    inserir(&minha_lista,"Paris");

    //Percorrer a lista
    imprimir(&minha_lista);

    liberar_lista(&minha_lista);

    return 0;
}