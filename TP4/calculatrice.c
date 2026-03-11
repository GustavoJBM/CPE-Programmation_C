#include <stdio.h>

int main(int argc, char **argv){

    if (argc < 2) {
        printf("Erro: Use %s <operador>\n", argv[0]);
        return 1;
    }

    char op = argv[1][0];

    
    switch (op) {
        
        case '+': printf("parabens vc escolheu +\n");
            break;
        case '-': printf("parabens vc escolheu -\n");
            break;  
    }
    


    //printf("%c\n",op);

    return 0;
}