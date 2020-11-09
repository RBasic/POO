#include "Voiture.h"

Voiture::Voiture()
{
	cout << "Constructeur Voiture" << endl;
}

void Voiture::demarrer()
{
	Vehicule::demarrer();
	cout << "La voiture demarre"<<endl;
}