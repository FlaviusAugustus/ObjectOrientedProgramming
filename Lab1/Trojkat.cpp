#include <iostream>
#include "Trojkat.h"

using namespace std;

Trojkat::Trojkat(double a, double b, double c) : a(a), b(b), c(c) {

	cout << "Konstruktor Trojkata(" << a << "," << b << "," << c << ")" << endl;

}

double Trojkat::GetA() const {
	
	return a;

}

double Trojkat::GetB() const {
	
	return b;

}

double Trojkat::GetC() const {
	
	return c;

}

void Trojkat::SetA(double a) {

	this->a = a;

}

void Trojkat::SetB(double b) {

	this->b = b;

}

void Trojkat::SetC(double c) {

	this->c = c;

}

double Trojkat::Pole() {

	double p = (a + b + c) / 2; 
	return sqrt(p * (p - a) * (p - b) * (p - c));

}

double Trojkat::Obwod() {

	return a + b + c;

}

void Trojkat::Wypisz(ostream& out) const {

	out << "Trojkat:\n"
		<< "a: " << a << '\n'
		<< "b: " << b << '\n'
		<< "c: " << c << endl;

}

Trojkat::~Trojkat() {

	cout << "Destruktor Trojkata(" << a << "," << b << "," << c << ")" << endl;

}