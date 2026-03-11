#include <stdio.h>
#include <string.h>
#define TAMANHO_STRING 50
#define N_ALUNOS 1

typedef struct etudiant {

    char* nom;
    char* prenom;

} etudiant;

void preencher(etudiant *e, char *nom, char* prenom ){

    strcpy(e->nom , nom);   //"e->" = "(*e).nom"
    strcpy(e->prenom , prenom);
}

int main() {

    etudiant eleves[N_ALUNOS];

    //preencher(eleves, "Gustavo"); "Gustavo" é do tipo (char*)

    preencher(&eleves[0], "JAROSKI", "Gustavo");

    for (int i = 0 ; i < N_ALUNOS ; i++){
        printf("Étudiant.e %d : \n",i+1);
        printf("Nom: %s\n", eleves[i].nom);
        printf("Nom: %s\n", eleves[i].prenom);
        printf("\n");
    }

    return 0;
}