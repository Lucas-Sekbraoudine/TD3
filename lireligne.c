#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * Lit une ligne du fichier correspondant au descripteur passé en argument jusqu'à lire un retour à la ligne ('\n') ou
 * avoir lu size caractères.
 *
 * @param fd descripteur de fichier ouvert en lecture
 * @param s buffer dans lequel les octets lus sont écrits
 * @param size nombre maximum d'octets à lire
 * @return le nombre d'octets effectivement lus
 */
int lireligne(int fd, char *s, int size) {
    int count = 0;
    int sz = read(fd, s, size);
    for(int i = 0; i < sz; i++){
        if (s[i] == '/n') {
            return count;
        }else{
            count++;
        }
    }
    return count;

}

int main() {

    int fd = open("message.txt", O_RDONLY);
    char string[1024];
    int size = lireligne(fd, string, 1024);
    printf("taille : %d", size);

}