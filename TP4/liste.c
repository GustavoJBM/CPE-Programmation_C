#include <stdio.h>
#include <stdlib.h>

typedef struct elemento {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    struct elemento* prox; //ponteiro para algum lugar da memória do TIPO (ELEMENTO*)
}elemento;

typedef struct lista {
    struct elemento* primeiro;
}lista;

//declaro (lista*) pq quero um ponteiro que aponte para o endereço que eu vou enviar quando for chamar a função
void init_lista(lista* l){
    l->primeiro = NULL;
    //(*l).primeiro = NULL; desrefenciamos o 'l' e mudamos o valor que estava no endereço recebido
}

void imprimir(lista* l){
    elemento* atual = l->primeiro; //aqui dentro precisamos usar -> pq l é um ponteiro

    printf("Lista de cores: \n");

    int i = 1;
    while (atual != NULL){
        printf("Cor %d : 0x%02x 0x%02x 0x%02x\n", i, atual->red, atual->green, atual->blue);
        atual = atual->prox;
        i++;
    }
}

void liberar_lista(lista* l){
    elemento* atual = l->primeiro;

    while (atual != NULL){
        elemento* temp = atual->prox; // salva o próximo
        free(atual);                  // libera o atual
        atual = temp;                 // avança
    }    
}

void inserir(lista* l, elemento* valor){

    elemento* novo = malloc(sizeof(elemento));//&endereço_qualquer;

    if (novo == NULL) {
        printf("Erro: malloc falhou\n");
        exit(1);
    }

    novo->red = valor->red;
    novo->green = valor->green;
    novo->blue = valor->blue;

    novo->prox = l->primeiro;//ambos tem o mesmo tipo (elemento*)
    //basicamente estamos dizendo para qual endereço o novo-> deve apontar

    l->primeiro = novo;
}