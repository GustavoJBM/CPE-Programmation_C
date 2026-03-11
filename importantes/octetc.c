#include <stdio.h>

int main() {
    int a = 0x3fc00000;

    //Pegamos o endereço de 'a', mas dizemos ao C: 
    //"Finja que isso aponta para um único byte (char), não para um int inteiro"
    unsigned char *ptr_byte = (unsigned char *)&a;

    printf("Bytes de a: %02x %02x %02x %02x\n", *ptr_byte,*(ptr_byte + 1),*(ptr_byte + 2),*(ptr_byte + 3));

    return 0;
}