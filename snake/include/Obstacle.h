#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "Personaje.h"
#include "Bug.h"
class Obstacle:public Personaje
{
    protected:
        int state;

    public:
        Obstacle();
        Obstacle(char);
        Obstacle(Position,char);
        void Dibujar();
        inline void SetState(int s){state=s;}
        inline int GetState(){return state;}
        bool Impacted(Bug b);
};




#endif // OBSTACLE_H
