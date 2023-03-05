#pragma once
#include "FiguraPlaska.h"


class Kolo : public FiguraPlaska {

	double r;

protected:

	void Wypisz(std::ostream& out) const override;

public:

	Kolo(double r);

	double getR() const;

	void setR(double r);

	double Pole() override;

	double Obwod() override;

	~Kolo() override;

};

