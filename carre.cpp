#include "Carre.h"
#include <iostream>

using namespace std;

void CCarre::Setsx(int sx1)
{
    this->sx = sx1;
}

void CCarre::Setsy(int sy1)
{
    this->sy = sy1;
}

void CCarre::Setcote(int cote1)
{
    this->cote = cote1;
}

void CCarre::Afficher()
{
    cout << "Coordonnees du carre : (" << sx << ", " << sy << ")\n";
    cout << "Longueur du cote : " << cote << "\n";
}

int CCarre::Getsx()
{
    cout << "la valeur de sx est de : "<<sx << endl;
    return 0;
}

int CCarre::Getsy()
{
    cout << "la valeur de sy est de : "<<sy << endl;
    return 0;
}

int CCarre::GetCote()
{
    cout << "la valeur de cote est de : "<<cote << endl;
    return 0;
}
