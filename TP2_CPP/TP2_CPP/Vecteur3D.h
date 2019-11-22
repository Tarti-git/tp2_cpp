#include <iostream>

class Vecteur3D
{
private:
	//Données membres de la classe
	float x;
	float y;
	float z;
public:
	///////////////////////////////////////

	//constructeurs a : fonctions membres surdefinie
	//Vecteur3D(float x, float y, float z);
	//Vecteur3D();

	///////////////////////////////////////

	//constructeur b et c : 1 fonction membre en ligne
	Vecteur3D(float x = 0, float y = 0, float z = 0);

	///////////////////////////////////////

	//destructeur
	~Vecteur3D();
};