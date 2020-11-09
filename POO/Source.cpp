#include <iostream>
#include <string>
#include <vector>
#include "Voiture.h"
#include "Moto.h"

using namespace std;

void function1(Vehicule& v) {
	v.~Vehicule();
}

int main() {

	vector<Vehicule*> garage;

	//Vehicule v1(57,2006,"Citroen C3",3500);
	Voiture vo1;
	Moto m1;
	//vo1.afficherInfos();
	//vo1.demarrer();
	garage.push_back(&vo1);
	garage.push_back(&m1);

	for(Vehicule* v : garage)
	{
		v->demarrer();
	}

	return 0;
}