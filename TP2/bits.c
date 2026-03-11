#include <stdio.h>

int main() {

    int a = 0b00010000000000000001000000000000;
    //int a = 0;

    int b = ( a >> (32-20) ) & 0x1;
    int c = ( a >> (32-4)  ) & 0x1;

    //printf("%d\n",a);
    //printf("%d\n",b);
    //printf("%d\n",c);

    if (b == 1 && c == 1){
        printf("1\n");
    }
    else{
        printf("0\n");
    }

    return 0;
}