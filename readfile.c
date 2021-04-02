#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


/**
 * Ouvre le fichier message.txt du répertoire courant et affiche son contenu à l'écran.
 */
int main() {
    int fd = open("message.txt", O_RDONLY);
    char string[1024];
    int sz;

    do {
        sz = read(fd, sz, 1023);
        string[size] = '/0'
        printf("%s", string)
    }
    while (size == 1024);

    close(fd)


}