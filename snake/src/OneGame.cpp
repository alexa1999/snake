#include "OneGame.h"

OneGame::OneGame()
{
    windowGame = new Ventana(Tamanio(40,15),string("the_Snake"),Position(5,5));
    Position t=windowGame->ObPosition();
    t.x+=5;
    t.y+=4;

    myBug = new Bug(t,157,Direction(1,0));//cabeza del gusano
    //254 es el cuadraditoo

    Position t2;
    Tamanio st=windowGame->ObTamanio();

    t=windowGame->ObPosition();
    t.x++;
    t.y++;

    srand (time(NULL));

    for(int i=0;i<comida;i++)
    {
        t2.x=t.x+rand()%(st.ancho-2);
        t2.y=t.y+rand()%(st.alto-2);
        myObstacles[i]=new Obstacle(t2,'&');
    }
}

void OneGame::Refresh()
{
    score=0;

    for(int i=0;i<comida;i++)
    {
        myObstacles[i]->Impacted(*myBug);

        if(myObstacles[i]->GetState()==1)
            myObstacles[i]->Dibujar();
        else
            score++;
    }

    myBug->Dibujar();
    stringstream s;
    s<<score;
    windowGame->MostrarMensaje(Position(0,1),string("Score: ")+s.str());

}

bool OneGame::Estrellarse (Bug b)
{
    Position pb=b.GetPos();
    Position pw=windowGame->ObPosition();
    Tamanio an=windowGame->ObTamanio();
    if(pb.x > pw.x && pb.x < pw.x +an.ancho-1 && pb.y > pw.y && pb.y < pw.y +an.alto-1)
        return false;
    return true;
}

void OneGame::Start()
{
    char c;
    bool endGame=false;
    windowGame->Dibujar();

    do
    {
        if(kbhit())//revisa si una tecla pulsada esta disponible
        {
            c = getch();

            Direction d=myBug->GetDirection();
            switch (c)
            {
                case ESC:               // press ESC to exit
                    endGame = true;
                    break;


                case UP:
                    d.dy=-1;d.dx=0;
                    break;
                case DOWN:
                    d.dy=1;d.dx=0;
                    break;
                case LEFT:
                    d.dx=-1;d.dy=0;
                    break;
                case RIGHT:
                    d.dx=1;d.dy=0;
                    break;
            }
            myBug->SetDirection(d);
        }

        if(Estrellarse(*myBug))
        {
            endGame=true;
            windowGame->MostrarMensaje(Position(0,21),string("snake estrellado!...."));
            break;
        }
        else
        {
            Refresh();
        }

        if(score==comida)
        {
            endGame=true;
            windowGame->MostrarMensaje(Position(0,21),string("Tu ganaste!...."));
        }

        Sleep(200);

    }while(!endGame);

    windowGame->MostrarMensaje(Position(0,22),"El final :D ");
}

OneGame::~OneGame()
{
    delete windowGame;
    for(int i=0;i<5;i++)
        delete myObstacles[i];
}
