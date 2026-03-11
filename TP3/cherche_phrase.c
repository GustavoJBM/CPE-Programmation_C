#include <stdio.h>

void procurar_frase(char* *alvo){   //desreferência &alvo[0] tipo (char*)
        //Array de ponteiros: cada elemento aponta para uma string literal
        char *phrases[] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    //Calcula o número de frases dinamicamente (o numero de elementos dentro da array (as frases) dividido pelo tamanho de cada uma (um ponteiro))
    int num_phrases = sizeof(phrases) / sizeof(phrases[0]);

    printf("Frases disponíveis: \n\n");
    for (int i = 0; i < num_phrases; i++) printf("%s\n", phrases[i]);

    printf("\nFrase alvo: %s\n\n",alvo[0]);//%s para imprimir a string completa, não apenas um caractere

    int encontrado = 0;
    for(int i = 0 ; i < num_phrases ; i++){
        for(int j = 0; alvo[0][j] != '\0' ; j++ ){
            if (alvo[0][j] == phrases[i][j])encontrado = 1;
            if (alvo[0][j] != phrases[i][j]){
                encontrado = 0;
                break;
            }
        }
    }
    if(encontrado)printf("Phrase trouvée\n");
    else printf("Phrase non trouvée\n");

}


int main() {

    char* alvo[] = {"Programmer en Python, c'est génial."};

    procurar_frase(alvo); //&alvo[0], estamos mandando um tipo (char*)

    return 0;
}