#ifndef MAPA_H
#define MAPA_H
#define MAXFILAS 11
#define MAXCOLS 6
#define SIZExCASILLA 60
#include "inicia.h"
#include <allegro.h>
#include <stdlib.h>

struct MAPA{

int numero_casillasEfect=0;
char mapa[MAXFILAS][MAXCOLS]={
  "XXXXX",
  "XXXXX",
  "XXXXX",
  "XXXXX",
  "XXXXX",
  "XXXXX",
  "XXXXX",
  "XXXXX",
  "ZZZZZ",
  "ZZZZZ",
};

int TipoElemento; // 0=fuego 1=viento 2=tierra 3=agua
// asi si el tipo de elemento de mapa es igual al del personaje, comprueba si le hace dano las casillas por efecto

BITMAP *casillaNormal=load_bitmap("casillaNormal.bmp",NULL);
BITMAP *casillaEfect=load_bitmap("casillaEfect.bmp",NULL);
BITMAP *mazo=load_bitmap("mazo.bmp",NULL);


public:

void tipoElemento();
void crearCasillasEfect();
void dibujarEfect();
void dibujarMapa(BITMAP *buffer);

};


#endif // MAPA_H
