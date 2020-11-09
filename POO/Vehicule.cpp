#include "Vehicule.h"

Vehicule::Vehicule()
{
	cout << "Constructeur vehicule" << endl;
	setMatricule(0);
	setAnnee(0);
	setModele("NoModel");
	setPrix(0);
}

Vehicule::Vehicule(int mat, int ann, string mod, float pri)
{
	setMatricule(mat);
	setAnnee(ann);
	setModele(mod);
	setPrix(pri);
}

int Vehicule::getMatricule() const
{
	return matricule;
}

int Vehicule::getAnnee() const
{
	return annee;
}

string Vehicule::getModele() const
{
	return modele;
}

float Vehicule::getPrix() const
{
	return prix;
}

void Vehicule::setMatricule(int mat)
{
	matricule = mat;
}

void Vehicule::setAnnee(int ann)
{
	annee = ann;
}

void Vehicule::setModele(string mod)
{
	modele = mod;
}

void Vehicule::setPrix(float pri)
{
	if (pri < 0) {
		cout << "Erreur de prix, mise a zero (valeur negative)" << endl;
		prix = 0;
	}else{
		prix = pri;
	}
}

void Vehicule::afficherInfos() const
{
	cout << "Matricule : " << getMatricule() << endl;
	cout << "Annee : " << getAnnee() << endl;
	cout << "Modele : " << getModele() << endl;
	cout << "prix : " << getPrix() << endl;
}

void Vehicule::demarrer()
{
	cout << "Je demarre mon vehicule !" << endl;
}

bool Vehicule::operator==(Vehicule const& other) const
{
	return (getMatricule() == other.getMatricule());
}

bool Vehicule::operator!=(Vehicule const& other) const
{
	return !(*this == other);
}
