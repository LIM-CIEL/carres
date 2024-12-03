#pragma once
#include <iostream>

class CCarre {
private:
    int sx;   // Coordonn�e X du carr�
    int sy;   // Coordonn�e Y du carr�
    int cote; // Longueur du c�t� du carr�

public:
    /**
     * Affecte une valeur � la coordonn�e X (sx).
     * sx1 Valeur enti�re � affecter � sx.
     */
    void Setsx(int sx1);

    /**
     *Affecte une valeur � la coordonn�e Y (sy).
     *sy1 Valeur enti�re � affecter � sy.
     */
    void Setsy(int sy1);

    /**
     *Affecte une valeur � la longueur du c�t� du carr� (cote).
     * cote1 Valeur enti�re � affecter � cote.
     */
    void Setcote(int cote1);

    /**
     *  Affiche les caract�ristiques du carr� (sx, sy, cote).
     */
    void Afficher();

    int Getsx(); 

    int Getsy();

    int GetCote();
    // "D�place" le carr� sans le dessiner. Les attributs x et y  
    // sont modifi�s en ajoutant ou retranchant la valeur de saut en fonction de  
    // la direction : par ex direction nord saut=2 y=y-2 
    // Entr�es : 
    //  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
    //   - saut : nombre de pixels de d�placement du carr� 
    // Sortie : Aucune 
    void Deplacer(char direction, int saut);

    void Deplacer(int dx, int dy);
};