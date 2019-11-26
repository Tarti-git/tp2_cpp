#include <iostream>
#include "Vecteur3D.h";

using namespace std;

int main()
{
	Vecteur3D v0;
	Vecteur3D v1(5, 5, 5);
	Vecteur3D v2(7, 5, 9);
	
	/*cout << "SOMME : ";
	v1.somme(v2).affiche();
	cout << "PRODUIT SCALAIRE : ";
	v1.scalaire(v2).affiche();*/
	cout << "nombre de points : " << v1.nombre() << endl;
	return 0;
}

