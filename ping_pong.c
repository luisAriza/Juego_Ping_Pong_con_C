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
}

void borde (char campo [V][H]) {
    
}