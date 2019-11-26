#include "Vecteur3D.h"

using namespace std;

float Vecteur3D::getX()
{
	return x;
}

float Vecteur3D::getY()
{
	return y;
}

float Vecteur3D::getZ()
{
	return z;
}

void Vecteur3D::affiche()
{
	cout << "<" << x << ", " << y << ", " << z << ">" << endl;
}

Vecteur3D Vecteur3D::somme(Vecteur3D& vect)
{
	return Vecteur3D(x + vect.x, y + vect.y, z + vect.z);
}

Vecteur3D Vecteur3D::scalaire(Vecteur3D& vect)
{
	return Vecteur3D(x * vect.x, y * vect.y, z * vect.z);
}

float Vecteur3D::normax(Vecteur3D vect)
{
	float norm1 = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	float norm2 = sqrt(pow(vect.x, 2) + pow(vect.y, 2) + pow(vect.z, 2));

	if (norm1 >= norm2)
		return norm1;
	else
		return norm2;
}

float *Vecteur3D::normax2(Vecteur3D *vect)
{
	float norm1 = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	float norm2 = sqrt(pow(vect->x, 2) + pow(vect->y, 2) + pow(vect->z, 2));

	if (norm1 >= norm2)
		return &norm1;
	else
		return &norm2;
}

float &Vecteur3D::normax3(Vecteur3D &vect)
{
	float norm1 = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	float norm2 = sqrt(pow(vect.x, 2) + pow(vect.y, 2) + pow(vect.z, 2));

	if (norm1 >= norm2)
		return norm1;
	else
		return norm2;
}

bool Vecteur3D::coincide(Vecteur3D vect)
{
	if (x == vect.x && y == vect.y && z == vect.z)
		return true;
	else
		return false;
}

bool Vecteur3D::coincide2(Vecteur3D* vect)
{
	if (x == vect->x && y == vect->y && z == vect->z)
		return true;
	else
		return false;
}

bool Vecteur3D::coincide3(Vecteur3D& vect)
{
	if (x == vect.x && y == vect.y && z == vect.z)
		return true;
	else
		return false;
}

Vecteur3D::Vecteur3D(float x, float y, float z) : x(x), y(y), z(z) {};

Vecteur3D::~Vecteur3D() {}
