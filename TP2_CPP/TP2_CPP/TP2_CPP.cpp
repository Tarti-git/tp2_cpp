#include <iostream>
#include "Vecteur3D.h";

using namespace std;

int main()
{
	Vecteur3D v0;
	Vecteur3D v1(5, 5, 5);
	Vecteur3D v2(7, 5, 9);

	cout << "La coincidence entre v0 et v1 est : " << v1.coincide(v0) << endl;
	cout << "La coincidence entre v0 et v2 est : " << v2.coincide2(&v0) << endl;
	cout << "La coincidence entre v1 et v2 est : " << v1.coincide3(v2) << endl;
	cout << "Comparaison des normes de v1 et v2 : " << v1.normax(v2) << endl;
	cout << "Comparaison des normes de v1 et v2 : " << v1.normax2(&v2) << endl;
	cout << "Comparaison des normes de v1 et v2 : " << v1.normax3(v2) << endl;
}

