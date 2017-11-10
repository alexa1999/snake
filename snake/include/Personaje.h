#ifndef PERSONAJE_H
#define PERSONAJE_H

#include "Pantalla.h"
class Personaje:public Pantalla
{
    protected:
        Position pos;
        char forma;
    public:
        Personaje();
        Personaje(char);
        Personaje(Position,char);
        virtual void Dibujar();

        void Move(Position);
        void MoveryDib(Position);
        Position GetPos();
};



#endif // PERSONAJE_H
