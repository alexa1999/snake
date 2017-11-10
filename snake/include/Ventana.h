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
        void MostrarMensaje(Position,string);//enseñar mensaje
        void Dibujar();


        inline Position ObPosition(){return pos;}//poner pos sacar ,adquirir
        inline Tamanio ObTamanio(){return mwSize;}//aumentar el tiempo de ejecución de un programa.
        //Las funciones pueden ser instruidas al compilador
         //para que estén en línea, de modo que el compilador pueda reemplazar esa definición de función donde sea que se llamen

        ~Ventana();
};




#endif // VENTANA_H
