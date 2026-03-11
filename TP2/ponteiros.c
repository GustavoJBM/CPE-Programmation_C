#include <stdio.h>

int main() {

    int valores[3] = {10,20,30};

    int *p = valores;   //mesma coisa que escrever &valores[0]

    *p = 100;

    //p += 2;           //muda o valor que o ponteiro está apontando
    *(p+2) = 300;       //o ponteiro continua apontando para &valores[0] só foi até &valores[2] mudou o valor dele e voltou para &valores[0]

    //*p = 300;

    for (int i=0 ; i < 3 ; i++){
        printf("%d\n",valores[i]);
    }

    printf("ponteiro aponta para: %d\n",*p);
    return 0;
}