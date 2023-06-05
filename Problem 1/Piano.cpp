#include "Pian.h"

Piano::Piano(std::string new_type, std::string new_brand, bool new_tune):Instrument(new_type, new_brand), tuned(new_tune)
{
}

void Piano::tunePiano()
{
	if (this->tuned == false)
	{
		this->tuned = true;
	}
	else
	{
		std::cout << "tuned piano!";
	}
}

void Piano::play()
{
	std::cout << "You must press the keys, " << this->type;
}

void Piano::showDetails()
{
	Instrument::showDetails();
	std::cout << ", ";

	if (this->tuned == true)
	{
		std::cout << "the piano is tuned!";
	}
	else
	{
		std::cout << "the piano is not tuned!";
	}
}
