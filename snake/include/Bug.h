#ifndef BUG_H
#define BUG_H
#include "Personaje.h"
#include "Direction.h"

class Bug:public Personaje//elimina el recorrido de el personaje
{
    protected:
        Direction dir;//fallo
    public:
        Bug();
        Bug(char);
        Bug(Position,char, Direction d=Direction(1,1));

        inline void SetDirection(Direction d){dir=d;}
        inline Direction GetDirection(){return dir;}
        void Dibujar();
};


#endif // BUG_H
