#include <stdio.h>
#include <stdlib.h>

typedef struct elemento {
    void* data;
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

    //int *ptr_int = (int *)atual->data;

    while (atual != NULL){
        printf("%d\n",*(int *)atual->data); //converte o void* para int* e dai desrefencia
        atual = atual->prox;
    }
}

void inserir(lista* l, int valor){
    elemento* novo = malloc(sizeof(elemento));//&endereço_qualquer;

    int* p = malloc(sizeof(int));  //aloca espaço para um int
    *p = valor;                    //guarda o valor lá dentro
    novo->data = p;                //o void* aponta para um int*

    novo->prox = l->primeiro;//ambos tem o mesmo tipo (elemento*)
    //basicamente estamos dizendo para qual endereço o novo-> deve apontar

    l->primeiro = novo;
}

void liberar_lista(lista* l){
    
    elemento* atual = l->primeiro;

    while (atual != NULL){
        elemento* temp = atual->prox; // salva o próximo
        free(atual->data);        
        free(atual);                  // libera o atual
        atual = temp;                 // avança
    }    
}

int main() {

    lista minha_lista; //iniciando uma variavel do tipo LISTA

    init_lista(&minha_lista); //passo o endereço de memoria LISTA

    inserir(&minha_lista,1);
    inserir(&minha_lista,2);
    inserir(&minha_lista,3);

    //Percorrer a lista
    imprimir(&minha_lista);

    liberar_lista(&minha_lista);

    return 0;
}