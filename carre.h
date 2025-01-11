/// @file NomDuFichier.h
/// @brief Programme principal du TP...
/// @details Ce programme utilise ...
/// @author Serge Delbosc
/// @version 0.1 - Visual Studio 2019
/// @date 09/09/2024
#pragma once
#include <iostream>
/// @brief Classe de base abstraite
class CCarre {
private:
    /// @brief Un attribut de la classe de CBase
    int sx;   // Coordonn�e X du carr�
    /// @brief Un attribut de la classe de CBase
    int sy;   // Coordonn�e Y du carr�
    /// @brief Un attribut de la classe de CBase
    int cote; // Longueur du c�t� du carr�

public:
    /**
     * Affecte une valeur � la coordonn�e X (sx).
     * sx1 Valeur enti�re � affecter � sx.
     */
     ///@brief valeur de x
    void Setsx(int sx1);

    /**
     *Affecte une valeur � la coordonn�e Y (sy).
     *sy1 Valeur enti�re � affecter � sy.
     */
     ///@brief valeur de y
    void Setsy(int sy1);

    /**
     *Affecte une valeur � la longueur du c�t� du carr� (cote).
     * cote1 Valeur enti�re � affecter � cote.
     */
     ///@brief valeurt de cote
    void Setcote(int cote1);

    /**
     *  Affiche les caract�ristiques du carr� (sx, sy, cote).
     */
     ///@brief valeur d'affichage
    void Afficher();
    ///@brief valeur d'affichage de x
    /// @return Une valeur de retour
    int Getsx();
    ///@brief valeur d'affichage de y
    /// @return Une valeur de retour
    int Getsy();
    ///@brief valeur d'affichage de cote
    /// @return Une valeur de retour
    int GetCote();
    // "D�place" le carr� sans le dessiner. Les attributs x et y  
    // sont modifi�s en ajoutant ou retranchant la valeur de saut en fonction de  
    // la direction : par ex direction nord saut=2 y=y-2 
    // Entr�es : 
    //  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
    //   - saut : nombre de pixels de d�placement du carr� 
    // Sortie : Aucune 
    ///@brief valeur du deplacement
    void Deplacer(char direction, int saut);
    ///@brief calcul de deplacement
    void Deplacer(int dx, int dy);
};