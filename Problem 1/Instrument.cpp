#include "Instrument.h"

Instrument::Instrument(std::string new_type, std::string new_brand):type(new_type), brand(new_brand)
{
}

void Instrument::showDetails()
{
	std::cout << "Type = " << this->type << ", Brand = " << this->brand;
}
