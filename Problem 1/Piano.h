#pragma once
#include "Instrument.h"

class Piano:public Instrument
{
protected:
	bool tuned;

public:
	Piano(std::string, std::string, bool = true);

	void tunePiano();

	void play();

	void showDetails();
};

