#pragma once
#include "Instrument.h"
#include "Portabil.h"

class Guitar:public Instrument, public Portable
{
protected:
	bool beginner;
	int nrStrings;
public:
	//Guitar(std::string, std::string, bool = false, int = 6);
	Guitar(bool, std::string, std::string, bool = false, int = 6);

	int getNrStrings();

	void play();

	void showDetails();

	bool operator==(const Guitar&);
};

