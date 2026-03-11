#include <stdio.h>

int main() {

    int varint = 10;
    int *pint = &varint;

    float varfloat = 1.5;
    float *pfloat = &varfloat;

    char varchar = 'a';
    char *pchar = &varchar;

    printf("endereço de varint: %p, valor de varint: 0x%x\n", pint,varint);
    printf("endereço de varfloat: %p, valor de varfloat: %.2f\n", pfloat,varfloat);
    printf("endereço de varchar: %p, valor de varchar: %x\n", pchar,varchar);
    printf("\n");

    *pint = 15;
    *pfloat = 99.78;
    *pchar = 'b';

    printf("endereço de varint: %p, valor de varint: 0x%x\n", pint,varint); //o endereço continua o mesmo
    printf("endereço de varfloat: %p, valor de varfloat: %.2f\n", pfloat,varfloat);
    printf("endereço de varchar: %p, valor de varchar: %x\n", pchar,varchar);
    /*
    int array[3] = {10,20,30};
    int *parray = array; // &array[0]

    for (int i = 0 ; i < 3 ; i++){printf("endereço da array: %p, valor da posição %d: %d\n",(parray+i),i,array[i]);}

    printf("\n");

    *parray = 99;
    *(parray+2) = 100;
    
    for (int i = 0 ; i < 3 ; i++){printf("endereço da array: %p, valor da posição %d: %d\n",(parray+i),i,array[i]);}
    */
    return 0;
}