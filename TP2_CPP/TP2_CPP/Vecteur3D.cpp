#include "Vecteur3D.h"

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
