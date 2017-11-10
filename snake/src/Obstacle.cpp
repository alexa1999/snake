#include "Obstacle.h"
Obstacle::Obstacle():Personaje(),state(1)
{

}

Obstacle::Obstacle(char c):Personaje(c),state(1)
{

}

Obstacle::Obstacle(Position p,char c): Personaje(p,c), state(1)
{

}

void Obstacle::Dibujar()
{
    char i='&';
    forma = i;
    Personaje::Dibujar();
}

bool Obstacle::Impacted(Bug b)
{
    if(pos.x==b.GetPos().x && pos.y==b.GetPos().y ){
        state=0;
        return true;
    }
    return false;
}
