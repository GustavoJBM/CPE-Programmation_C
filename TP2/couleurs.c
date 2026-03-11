#include <stdio.h>

typedef struct couleur {
    
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;

} couleur;


int main() {



    couleur cor[2];

    cor[0].red = 0xef;
    cor[0].green = 0x78;
    cor[0].blue = 0x12;
    cor[0].alpha = 0xff;

    cor[1].red = 0xfe;
    cor[1].green = 0x87;
    cor[1].blue = 0x21;
    cor[1].alpha = 0xff;

    for (int i=0 ; i < 2 ; i++){

        printf("Couleur %d\n",i+1);
        printf("red : %d\n", cor[i].red);
        printf("green : %d\n", cor[i].green);
        printf("blue : %d\n", cor[i].blue);
        printf("alpha : %d\n", cor[i].alpha);
        printf("\n");
    }

    return 0;
}