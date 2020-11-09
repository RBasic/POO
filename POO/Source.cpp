#include <iostream>
#include <string>
#include <vector>
#include "Voiture.h"
#include "Moto.h"

using namespace std;

//appel demarrer en fonction du type de vehicule
void function1(Vehicule& v) {
	v.demarrer();
}

//template de classe Pair
template<class T, class U> 
class Pair {
private:
	T a;
	U b;

public:
	Pair(T valA, U valB);
	T getA();
	U getB();
	void setA(T valA);
	void setB(U valB);
	T add();
};

//template spécifique int,string de classe Pair
template<> 
class Pair<int,string> {
private:
	int a;
	string b;

public:
	Pair(int valA, string valB);
	int getA();
	string getB();
	void setA(int valA);
	void setB(string valB);
	int add();
	int substractIntString();
};

template<class T, class U>
Pair<T, U>::Pair(T valA, U valB) :a(valA), b(valB) {}
Pair<int, string>::Pair(int valA, string valB)
{
	a = valA;
	b = valB;
}

template<class T, class U>
T Pair<T, U>::getA()
{
	return a;
}
template<class T, class U>
U Pair<T, U>::getB()
{
	return b;
}
template<class T, class U>
void Pair<T, U>::setA(T valA)
{
	a = valA;
}
template<class T, class U>
void Pair<T, U>::setB(U valB)
{
	b = valB;
}

void Pair<int, string>::setA(int valA)
{
	a = valA;
}
void Pair<int, string>::setB(string valB)
{
}

template<class T, class U>
T Pair<T, U>::add()
{
	return a + b;
}

int Pair<int, string>::add()
{
	return a + b.size();
}
int Pair<int, string>::substractIntString()
{
	return a - b.size();
}

template<>
string Pair<string, string>::add()
{
	return a + " " + b;
}

int main() {
	Pair<int,int> test1(10,15);
	Pair<float,double> test2(10.5, 15.67);
	Pair<int,string> test3(15, "coucou");

	cout << test1.add() << endl;
	cout << test3.add() << endl;
	cout << test3.substractIntString();

	/*vector<Vehicule*> garage;

	//Vehicule v1(57,2006,"Citroen C3",3500);
	Voiture vo1;
	Moto m1;
	//vo1.afficherInfos();
	//vo1.demarrer();
	garage.push_back(&vo1);
	garage.push_back(&m1);

	for (Vehicule* v : garage)
	{
		v->demarrer();
	}*/

	return 0;
}
