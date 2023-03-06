#pragma once
#include <iostream>

class FiguraPlaska {

protected:

	static int objectCount;

	virtual void Wypisz(std::ostream& out) const = 0;

	friend std::ostream& operator<<(std::ostream&, const FiguraPlaska& figura);

public:

	virtual double Pole() = 0;

	virtual double Obwod() = 0;

	virtual ~FiguraPlaska();

};