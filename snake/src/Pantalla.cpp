#include "Pantalla.h"
void Pantalla::GotoXY(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole,coord);//
// Obtener un control para el buffer de la pantalla de la consola.
    // (Solo está usando la consola estándar, por lo que puede usar STD_OUTPUT_HANDLE
    // junto con GetStdHandle () para recuperar el controlador.)
    // Tenga en cuenta que debido a que es un identificador estándar, no necesitamos cerrarlo.

}

void Pantalla::DibPixel(int x, int y, char pixel)
{
    GotoXY(x,y);
    cout<<pixel;
}

void Pantalla::DibPixel(Position p, char pixel)
{
    DibPixel(p.x,p.y,pixel);
}


void Pantalla::ElimPixel(int x, int y)
{
    GotoXY(x,y);
    cout<<" ";
}

void Pantalla::ElimPixel(Position p)
{
    ElimPixel(p.x,p.y);
}

