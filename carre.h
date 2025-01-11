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
    int sx;   // Coordonnée X du carré
    /// @brief Un attribut de la classe de CBase
    int sy;   // Coordonnée Y du carré
    /// @brief Un attribut de la classe de CBase
    int cote; // Longueur du côté du carré

public:
    /**
     * Affecte une valeur à la coordonnée X (sx).
     * sx1 Valeur entière à affecter à sx.
     */
     ///@brief valeur de x
    void Setsx(int sx1);

    /**
     *Affecte une valeur à la coordonnée Y (sy).
     *sy1 Valeur entière à affecter à sy.
     */
     ///@brief valeur de y
    void Setsy(int sy1);

    /**
     *Affecte une valeur à la longueur du côté du carré (cote).
     * cote1 Valeur entière à affecter à cote.
     */
     ///@brief valeurt de cote
    void Setcote(int cote1);

    /**
     *  Affiche les caractéristiques du carré (sx, sy, cote).
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
    // "Déplace" le carré sans le dessiner. Les attributs x et y  
    // sont modifiés en ajoutant ou retranchant la valeur de saut en fonction de  
    // la direction : par ex direction nord saut=2 y=y-2 
    // Entrées : 
    //  - direction : vaut 'n' si nord, 's' si sud, 'o' si ouest, 'e' si est 
    //   - saut : nombre de pixels de déplacement du carré 
    // Sortie : Aucune 
    ///@brief valeur du deplacement
    void Deplacer(char direction, int saut);
    ///@brief calcul de deplacement
    void Deplacer(int dx, int dy);
};