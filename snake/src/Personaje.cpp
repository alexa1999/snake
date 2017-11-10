#include "Personaje.h"
Personaje::Personaje(): pos(Position(0,0))
{

}

Personaje::Personaje(char c): pos(Position(0,0)),forma(c)
{

}

Personaje::Personaje(Position p,char c): pos(p),forma(c)
{

}

void Personaje::Dibujar()
{
    DibPixel(pos,forma);
}



void Personaje::Move(Position p)
{
    pos=p;
}

void Personaje::MoveryDib(Position p)
{
    ElimPixel(pos);
    Move(p);
    Dibujar();
}

Position Personaje::GetPos()
{
    return pos;
}
