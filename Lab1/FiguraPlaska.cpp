#include <iostream>
#include "FiguraPlaska.h"

int FiguraPlaska::objectCount = 0;

std::ostream& operator<<(std::ostream& os, const FiguraPlaska& figura) {

	figura.Wypisz(os);
	return os;

}

FiguraPlaska::~FiguraPlaska() {

	objectCount--;

}


