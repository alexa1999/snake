#ifndef VENTANA_H
#define VENTANA_H
#include "Pantalla.h"
#include "Tamanio.h"
class Ventana: public Pantalla
{
    protected:
        Position pos;
        Tamanio mwSize;
        string title;
        void DibLinH(int,int,int, char);
        void DibLinV(int,int,int, char);
    public:

        Ventana(Tamanio, string, Position p=Position(0,0));
        void MostrarMensaje(Position,string);//ense�ar mensaje
        void Dibujar();


        inline Position ObPosition(){return pos;}//poner pos sacar ,adquirir
        inline Tamanio ObTamanio(){return mwSize;}//aumentar el tiempo de ejecuci�n de un programa.
        //Las funciones pueden ser instruidas al compilador
         //para que est�n en l�nea, de modo que el compilador pueda reemplazar esa definici�n de funci�n donde sea que se llamen

        ~Ventana();
};




#endif // VENTANA_H
