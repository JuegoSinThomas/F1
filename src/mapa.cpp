#include "mapa.h"
#define MAXFILAS 11
#define MAXCOLS 6
#define SIZExCASILLA 60
#include "inicia.h"
#include <stdlib.h>
#include <allegro.h>
#include <time.h>
#include<iostream>
using namespace std;

void MAPA::tipoElemento(){
srand(time(NULL));
TipoElemento=rand()%4;
if(TipoElemento==0) casillaEfect=load_bitmap("casillaEfect.bmp",NULL);
else if(TipoElemento==1) casillaEfect=load_bitmap("casillaEfect2.bmp",NULL);
else if(TipoElemento==2) casillaEfect=load_bitmap("casillaEfect3.bmp",NULL);
else if(TipoElemento==3) casillaEfect=load_bitmap("casillaEfect4.bmp",NULL);

}

void MAPA::crearCasillasEfect(){
    srand(time(NULL));
numero_casillasEfect=rand()%5; //cantidad aleatoria de casillas por efecto hasta 5
if(numero_casillasEfect<3)numero_casillasEfect=3;
}

void MAPA::dibujarEfect(){
    //colocara letras E tantas casillas por efecto hayan dentro de la matriz CHAR
tipoElemento();
crearCasillasEfect();
int aleatorioX,aleatorioY;
//valores aleatorios en x y en y para colocar en el mapa casillas por efect;

for(int i=0;i<numero_casillasEfect;i++){

    aleatorioY=rand()%7;
    aleatorioX=rand()%5;
if(aleatorioX<3) aleatorioX=aleatorioX+2;

    mapa[aleatorioX][aleatorioY]='E';
//    en esas posiciones pondre una letra E en el mapa, donde se dibujaran las Casillas de Efect


}

}

void MAPA::dibujarMapa(BITMAP* buffer){


int row,col; //columnas y filas
    for(row=0; row<MAXFILAS; row++){ //recorrera toda la matriz y donde encuentre X, dibuja casillas normales
        for(col=0; col<MAXCOLS;col++){ // y donde encuentre E, casillas por efecto
            if(mapa[row][col] =='X')
                draw_sprite(buffer,casillaNormal,col*60,row*60);

            else if(mapa[row][col] =='E')
                draw_sprite(buffer,casillaEfect,col*60,row*60);

        }
    }
draw_sprite(buffer,mazo,0,480); // dibuja el mazo que tiene en la parte de abajo

}
