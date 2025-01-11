#include "Carre.h"
#include <iostream>

using namespace std;
/// @brief Fonction de valeur x
/// @param[in] sx1 valeur x
void CCarre::Setsx(int sx1)
{
    this->sx = sx1;
}
/// @brief Fonction de valeur y
/// @param[in] sy1 valeur y
void CCarre::Setsy(int sy1)
{
    this->sy = sy1;
}
/// @brief Fonction de valeur cote
/// @param[in] cote1 valeur cote1
void CCarre::Setcote(int cote1)
{
    this->cote = cote1;
}
/// @brief Fonction de afficher
void CCarre::Afficher()
{
    cout << "Coordonnees du carre : (" << sx << ", " << sy << ")\n";
    cout << "Longueur du cote : " << cote << "\n";
}
/// @brief Fonction de valeur x
///returne 0
int CCarre::Getsx()
{
    cout << "la valeur de sx est de : " << sx << endl;
    return 0;
}
/// @brief Fonction de valeur y
///returne 0
int CCarre::Getsy()
{
    cout << "la valeur de sy est de : " << sy << endl;
    return 0;
}
/// @brief Fonction de valeur cote
///returne 0
int CCarre::GetCote()
{
    cout << "la valeur de cote est de : " << cote << endl;
    return 0;
}
/// @brief Fonction de deplacement
/// @param[in] direction direction
/// @param[in] saut saut
void CCarre::Deplacer(char direction, int saut)
{
    switch (direction) {
    case 'n': // Nord
        sy -= saut;
        break;
    case 's': // Sud
        sy += saut;
        break;
    case 'o': // Ouest
        sx -= saut;
        break;
    case 'e': // Est
        sx += saut;
        break;
    default:
        cout << "Direction invalide ! Utilisez 'n', 's', 'o' ou 'e'.\n";
        break;
    }
}
/// @brief Fonction de deplacement
/// @param[in] dx
/// @param[in] dy
void CCarre::Deplacer(int dx, int dy)
{
    sx += dx;
    sy += dy;
}

