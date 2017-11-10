#ifndef ONEGAME_H
#define ONEGAME_H
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string>
#include <conio.h>
#include <time.h>
#include <sstream>
#include "Ventana.h"
#include "Obstacle.h"
const char UP = 72;
const char LEFT = 75;
const char RIGHT = 77;
const char DOWN = 80;
const char ESC = 27;
const char SPACE = 32;

const int comida=5;

class OneGame
{
    protected:

        Ventana *windowGame;
        Obstacle *myObstacles[comida];
        Bug *myBug;
        int score;
    public:

        OneGame();
        void Start();
        void Refresh();
        bool Estrellarse(Bug);
        ~OneGame();
};



#endif // ONEGAME_H
