#include <iostream>
#include "FiguraPlaska.h"
#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"

using namespace std;

class BasicCalc {

public:

	virtual int add(int a, int b) {
	
		return a + b;
	
	}
};

class AdvancedCalc : public BasicCalc {

public:

	int add(int a, int b) override {

		return 2 * a + 2 * b;

	}

	int substract(int a, int b) {

		return a - b;

	}

	double substract(double a, double b) {

		return a - b;

	}

};



int main() {
	
	//	TASK 3.1	TASK 3.2
	FiguraPlaska* kolo = new Kolo(3);
	FiguraPlaska* trojkat = new Trojkat(2, 2, 2);
	FiguraPlaska* prostokat = new Prostokat(2, 2);

	FiguraPlaska* tab[] = { kolo, trojkat, prostokat };

	for(FiguraPlaska* figura : tab ) {
		
		cout << figura->Obwod() << " ";
		cout << figura->Pole() << '\n';
	
	}

	//release allocated memory
	delete kolo;
	delete trojkat;
	delete prostokat;


	//TASK 3.3

	BasicCalc calcB;
	AdvancedCalc calcA;

	//overloading
	cout << calcA.substract(2, 5) << '\n';
	cout << calcA.substract(5.5, 5.5) << '\n';

	//overriding

	cout << calcA.add(2, 2) << '\n';
	cout << calcB.add(2, 2) << '\n';

	return 0;
}