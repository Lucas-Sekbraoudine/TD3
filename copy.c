#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * Copie le contenu du fichier message.txt dans un fichier copie.txt
 */
int main() {
    int fd1 = open("message.txt", O_RDONLY);
    int fd2 = open("copie.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    char string[1024];
    int sz;

    do {
        sz = read(fd, sz, 1023);
        string[size] = '/0'
        write(fd2, string, sz)
    }
    while (size == 1024);

    close(fd1);
    close(fd2);

}