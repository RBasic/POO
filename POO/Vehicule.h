#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicule
{
protected :			//Encapsulation
	//Attributs
	int matricule;
	int annee;
	string modele;
	float prix;

public : 
	//Méthodes
	Vehicule();
	Vehicule(int mat, int ann, string mod, float pri);

	//Getters
	int getMatricule() const;
	int getAnnee() const;
	string getModele() const;
	float getPrix() const;

	//Setters
	void setMatricule(int mat);
	void setAnnee(int ann);
	void setModele(string mod);
	void setPrix(float pri);

	void afficherInfos() const;
	virtual void demarrer() = 0;

	//surcharge operateur
	bool operator==(Vehicule const& other) const;
	bool operator!=(Vehicule const& other) const;
};

