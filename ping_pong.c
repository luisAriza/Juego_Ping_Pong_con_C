#include <stdio.h>
#define V 21
#define H 75

int main () {

    int pelX, pelY, inijug, finjug, iniia, finia;
    char campo[V][H];

    pelX = 37;  //La mitad de H... para la pelota
    pelY = 10;  //La mitad de V

    inijug = 8;  //Inicio de la raqueta del jugador
    finjug = 12;  //Fin de la raqueta del jugador

    iniia = 8;  //Inicio de la raqueta de la IA
    finia = 12;  //fin de la raqueta de la IA

    inicio (campo, pelX, pelY, inijug, finjug, iniia, finia);
    system("pause");
    return 0;
}

void inicio (char campo [V][H], int pelX, int pelY, int inijug, int finjug, int iniia, int finia) {
    borde (campo);
    raqjug (campo, inijug, finjug);
    raqia (campo, iniia, finia);
}

void borde (char campo [V][H]) {
    int i, j;

    for (i = 0; i < V; i++) {
        for (j = 0; j < H; j++) {
            if (i == 0 || i == V-1) {
                campo[i][j] = '*';
            }
            else if (j == 0 || j == H-1) {
                campo[i][j] = '*';
            } else {
                campo[i][j] = ' ';
            }
        }
    }
}

void raqjug (char campo[V][H], int inijug, int finjug) {
    int i,j;

    for (i = inijug; i < finjug; i++) {
        for (j = 2; j <= 3; j++) {
            campo[i][j] = '#';
        }
    }
}

void raqia (char campo[V][H], int iniia, int finia) {
    int i, j;

    for (i = iniia; i < finia; i++) {
        for (j = H-4; j <= H-3; j++) {
            campo[i][j] = '#';
        }
    }
}