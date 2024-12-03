#pragma once
#include <iostream>

class CCarre {
private:
    int sx;   // Coordonnée X du carré
    int sy;   // Coordonnée Y du carré
    int cote; // Longueur du côté du carré

public:
    /**
     * Affecte une valeur à la coordonnée X (sx).
     * sx1 Valeur entière à affecter à sx.
     */
    void Setsx(int sx1);

    /**
     *Affecte une valeur à la coordonnée Y (sy).
     *sy1 Valeur entière à affecter à sy.
     */
    void Setsy(int sy1);

    /**
     *Affecte une valeur à la longueur du côté du carré (cote).
     * cote1 Valeur entière à affecter à cote.
     */
    void Setcote(int cote1);

    /**
     *  Affiche les caractéristiques du carré (sx, sy, cote).
     */
    void Afficher();
};