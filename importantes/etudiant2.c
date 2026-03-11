#include <stdio.h>
#include <string.h>
#define TAMANHO_STRING 50
#define N_ALUNOS 2

typedef struct etudiant {
    char nom[TAMANHO_STRING];
    char prenom[TAMANHO_STRING];
    int note1;
    int note2;

} etudiant;

void preencher(etudiant *e, char* nom, char* prenom, int note1, int note2){

    strcpy(e->nom , nom);   //"e->" = "(*e).nom"
    strcpy(e->prenom , prenom);
    e->note1 = note1;
    e->note2 = note2;
}

int main() {

    etudiant eleves[N_ALUNOS];

    //preencher(eleves, "Gustavo"); "Gustavo" é do tipo (char*)

    preencher(&eleves[0], "JAROSKI", "Gustavo", 15, 16);
    preencher(&eleves[1], "CARLOTTO", "Marina", 20, 17);

    for (int i = 0 ; i < N_ALUNOS ; i++){
        printf("Étudiant.e %d : \n",i+1);
        printf("Nom: %s\n", eleves[i].nom);
        printf("Prenom: %s\n", eleves[i].prenom);
        printf("Note 1: %d\n", eleves[i].note1);
        printf("Note 2: %d\n", eleves[i].note2);
        printf("\n");
    }

    return 0;
}