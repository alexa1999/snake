#ifndef PANTALLA_H
#define PANTALLA_H
#include "Position.h"
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string>
#include <conio.h>
#include <time.h>
#include <sstream>
using namespace std;


class Pantalla
{
    protected:
        COORD coord={0,0};
        void GotoXY(int,int);
    public:
        void DibPixel(int, int, char);
        void DibPixel(Position, char);
        void ElimPixel(int, int);
        void ElimPixel(Position);
};


#endif // PANTALLA_H
