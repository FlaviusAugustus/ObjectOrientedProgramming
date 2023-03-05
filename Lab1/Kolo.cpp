#include <iostream>
#include "Kolo.h"

using namespace std;

Kolo::Kolo(double r) : r(r) {

	cout << "Konstruktor Kola(" << r << ")" << endl;

}


void Kolo::Wypisz(ostream& out) const {

	out << "Kolo:\n" << "r: " << r << endl;

}

void Kolo::setR(double r) {

	this->r = r;

}

double Kolo::getR() const {

	return r;
	
}

double Kolo::Obwod() {

	return 2 * 3.14 * r;

}

double Kolo::Pole() {

	return 3.14 * r * r;

}

Kolo::~Kolo() {

	cout << "Destruktor Kola(" << r << ")" << endl;

}