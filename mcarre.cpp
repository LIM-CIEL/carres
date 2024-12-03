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
	c1.Afficher();
	c1.Getsx();
	c1.Getsy();
	c1.GetCote();
}