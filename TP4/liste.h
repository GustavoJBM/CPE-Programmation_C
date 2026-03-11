
typedef struct elemento {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    struct elemento* prox;
}elemento;

typedef struct lista {
    struct elemento* primeiro;
}lista;

void inserir(lista* l, elemento* valor);
void liberar_lista(lista* l);
void imprimir(lista* l);
void init_lista(lista* l);