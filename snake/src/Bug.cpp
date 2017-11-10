#include "Bug.h"
Bug::Bug():Personaje(),dir(Direction(1,1))
{

}

Bug::Bug(char c):Personaje(c),dir(Direction(1,1))
{

}

Bug::Bug(Position p,char c, Direction d): Personaje(p,c),dir(d)
{

}

void Bug::Dibujar()
{
    ElimPixel(pos);
    Move(Position(pos.x+dir.dx,pos.y+dir.dy));
    Personaje::Dibujar();
}
