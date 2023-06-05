#pragma once
#include<iostream>

class Instrument
{
protected:
	std::string type, brand;

public:
	Instrument(std::string, std::string);

	virtual void redare() = 0;

	virtual void showDetails();
};

