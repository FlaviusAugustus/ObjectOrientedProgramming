#include <iostream>
#include "Prostokat.h"

using namespace std;

int Prostokat::objectCount = 0;

Prostokat::Prostokat(double a, double b) : a(a), b(b) {

	Prostokat::objectCount++;
	FiguraPlaska::objectCount++;

	cout << "FP: " << FiguraPlaska::objectCount << " P: " << Prostokat::objectCount << endl;

	cout << "Konstruktor Prostokata(" << a << "," << b << ")" << endl;

}

double Prostokat::GetA() const {
	
	return a;

}

double Prostokat::GetB() const {

	return b;

}

void Prostokat::SetA(double a) {

	this->a = a;

}

void Prostokat::SetB(double b) {

	this->b = b;

}

double Prostokat::Obwod() {

	return 2 * b + 2 * a;

}

double Prostokat::Pole() {

	return a * b;

}

void Prostokat::Wypisz(std::ostream& out) const {

	out << "Prostokat:\n" << "a: " << a << '\n' << "b: " << b << endl;

}

Prostokat::~Prostokat() {

	cout << "Destruktor Prostokata(" << a << "," << b << ")" << endl;

}