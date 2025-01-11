#include <iostream>
#include "carre.h"


using namespace std;

int main()
{
	/*cout << "                 veuiller inserer les valeur demander." << endl;
	cout << "----------------------------------------------------------------------------" << endl;
	cout << " " << endl;
	cout << "inserer la valeur de sx1 : " << endl;*/
	CCarre c1;
	c1.Setsx(3);
	c1.Setsy(15);
	c1.Setcote(100);
	c1.Getsx();
	c1.Getsy();
	c1.GetCote();

	cout << " " << endl;
	cout << " " << endl;

	cout << "Avant deplacement :\n";
	c1.Afficher();

	cout << " " << endl;
	cout << " " << endl;

	c1.Deplacer('n', 2); // Déplacement vers le nord
	cout << "Après deplacement vers le nord (saut=2) :\n";
	c1.Afficher();

	cout << " " << endl;
	cout << " " << endl;

	c1.Deplacer('e', 3); // Déplacement vers l'est
	cout << "Après deplacement vers l'est (saut=3) :\n";
	c1.Afficher();

	CCarre carres[4];

	for (int i = 0; i < 4; i++) {
		carres[i].Setsx(i * 10);      // Coordonnée sx
		carres[i].Setsy(i * 15);      // Coordonnée sy
		carres[i].Setcote((i + 1) * 5); // Longueur du côté
	}

	for (int i = 0; i < 4; i++) {
		std::cout << "Carré " << i + 1 << ":" << std::endl;
		carres[i].Afficher();
		std::cout << std::endl;
	}
}