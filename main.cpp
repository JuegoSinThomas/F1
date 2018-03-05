#include <allegro.h>
#include "inicia.h"
#include "mapa.h"
#define MAXFILAS 11
#define MAXCOLS 6
#define SIZExCASILLA 60

BITMAP *buffer;
int main ()
{

    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,300,600,0,0);
    buffer = create_bitmap(300,600);

    MAPA mapa;
    mapa.dibujarEfect();
      while(!key[KEY_ESC]){

    clear(buffer);

    mapa.dibujarMapa(buffer);
    blit(buffer, screen, 0, 0, 0, 0, 300,600);


rest(1000);
      }
    return 0;
}
END_OF_MAIN ()


