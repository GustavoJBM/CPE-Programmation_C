#include <stdio.h>
#include "liste.h"

int main(){

    lista minha_lista; //iniciando uma variavel do tipo LISTA

    init_lista(&minha_lista); //passo o endereço de memoria LISTA

    elemento cor1 = {0xFF, 0x00, 0x00};
    elemento cor2 = {0x00, 0x00, 0xFF};
    elemento cor3 = {0x00, 0xFF, 0x00};

    //inserir(&minha_lista,1);

    inserir(&minha_lista, &cor3);
    inserir(&minha_lista, &cor2);
    inserir(&minha_lista, &cor1);

    //Percorrer a lista
    imprimir(&minha_lista);

    liberar_lista(&minha_lista);

    return 0;
}