#include <stdio.h>

int main(){

    int a = 2, b = 3;
    int c = (a += b++) + (++a * b) - (a-- | ++b);

    printf("a = %d\n",a);
    printf("c = %d\n",c);

    return 0;
}

/*Sobre comportamento indefinido — 
na prática em GCC vai funcionar, mas tecnicamente modificar uma variável múltiplas vezes entre dois sequence points é comportamento indefinido em C. 
O professor menciona isso na questão propositalmente — vale citar isso na resposta da prova.*/