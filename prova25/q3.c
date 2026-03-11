#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Task {
    char name[50];
    int priority;
}Task;

void addTask(Task list[], int *size, char name[], int priority){

    strcpy(list[*size].name,name);
    list[*size].priority = priority;

    (*size)++;
}

void listTasks(Task list[], int size){

    printf("Minha lista de afazeres : \n");
    for (int i = 0 ; i < size ; i++) {
        printf("ação : %s, prioridade : %d\n", list[i].name, list[i].priority);
    }

}

void removeTask(Task list[], int *size, int index){

    for (int i = index ; i < (*size) - 1 ; i ++){
        list[i] = list[i+1];
    }
    (*size)--;
}

int main(int argc, char **argv){

    int size = 3;
    Task my_tasks[10] = {
        {"Faire les courses", 2},
        {"Acheter du lait", 1},
        {"Appeler le médecin", 3}
    };

    if (argc < 2) {
        printf("Erro: Use %s <add> <'ação'> <prioridade>\tOU\n", argv[0]);
        printf("Erro: Use %s <remove> <indice>\t\tOU\n", argv[0]);
        printf("Erro: Use %s <list> <>\t\t\tOU\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "add") == 0) {  //strcmp == 0 se são iguais

        if (argc < 4){
            printf("Erro: Use %s <add> <'ação'> <prioridade>\n", argv[0]);
            return 1;
        }
        char* action = argv[2];
        int priority = atoi(argv[3]); //atoi transforma string simples em um int
        
        addTask(my_tasks, &size, action, priority);
        listTasks(my_tasks, size);

    } else if (strcmp(argv[1], "list") == 0) {

        listTasks(my_tasks, size);

    } else if (strcmp(argv[1], "remove") == 0) {

        if (argc < 3){
            printf("Erro: Use %s <remove> <indice>\n", argv[0]);
            return 1;
        }        

        int index = atoi(argv[2]);
        
        removeTask(my_tasks, &size, index);
        listTasks(my_tasks, size);

    } else {
        printf("Comando desconhecido: %s\n", argv[1]);
    }

    return 0;
}