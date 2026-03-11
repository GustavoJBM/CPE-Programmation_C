#include <stdio.h>

int main() {
    float a = 0x04030201;

    // 1. Pegamos o endereço de 'a', mas dizemos ao C: 
    // "Finja que isso aponta para um único byte (char), não para um int inteiro"
    unsigned char *ptr_byte = (unsigned char *)&a;

    // 2. Agora podemos acessar cada byte individualmente somando ao endereço
    printf("Byte 0 (no endereço %p): %02x\n", ptr_byte, *ptr_byte);
    printf("Byte 1 (no endereço %p): %02x\n", ptr_byte + 1, *(ptr_byte + 1));
    printf("Byte 2 (no endereço %p): %02x\n", ptr_byte + 2, *(ptr_byte + 2));
    printf("Byte 3 (no endereço %p): %02x\n", ptr_byte + 3, *(ptr_byte + 3));

    return 0;
}