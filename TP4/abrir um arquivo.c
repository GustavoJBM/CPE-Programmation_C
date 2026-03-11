#include <stdio.h>
#include <unistd.h> //para close 
#include <fcntl.h>  //para open

int main(){

    int fd, count, size;
    char buffer[100];

    fd = open("ficheiro.txt", O_RDONLY); //O_RDONLY = Open Read Only 
    //retorna -1 o arquivo não existe ou não tem permissão

    size = read(fd, buffer, 100);

    if (fd < 0) {
        perror("Erro ao abrir o arquivo"); // perror explica o porquê do erro
        return 1;
    }

    for (count = 0; count < size; count ++) {
    printf("%c", buffer[count]);
    }
    printf("\n");
    close(fd);

    return 0;
}