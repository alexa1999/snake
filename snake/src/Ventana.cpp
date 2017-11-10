#include "Ventana.h"





Ventana::Ventana(Tamanio s, string t, Position p): mwSize(s), title(t), pos(p)
{

}

void Ventana::MostrarMensaje(Position p,string mensaje)//enseñar mensaje
{
    GotoXY(p.x,p.y);
    cout<<mensaje;
}

void Ventana::DibLinH(int xi,int xf,int y, char c)
{
    int i=xi;
    while(i<xf)
        DibPixel(i++,y,c);

}

void Ventana::DibLinV(int yi,int yf,int x, char c)
{
    int i=yi;
    while(i<yf)
        DibPixel(x,i++,c);
}

void Ventana::Dibujar()
{
    // the Title
    int tamTitle=title.length();//longitud largo lentgh
    int l=(mwSize.ancho-tamTitle)/2;//ancho anchura ancho
    char c='*';

    DibLinH(pos.x, pos.x + l-1, pos.y, c);
    MostrarMensaje(Position(pos.x + l,pos.y), title);
    DibLinH(pos.x + l + tamTitle+1, pos.x + mwSize.ancho, pos.y, c);
    DibLinH(pos.x, pos.x + mwSize.ancho, pos.y + mwSize.alto - 1, c);
    DibLinV(pos.y ,pos.y + mwSize.alto - 1, pos.x, c);
    DibLinV(pos.y, pos.y + mwSize.alto-1, pos.x + mwSize.ancho - 1, c);
}

Ventana::~Ventana()
{
}
