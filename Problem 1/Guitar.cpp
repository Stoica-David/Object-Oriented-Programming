#include "Chitara.h"

//Chitara::Chitara(std::string tip_nou, std::string marca_noua, bool incepatori_nou, int numarCorzi_nou):Instrument(tip_nou, marca_noua), incepatori(incepatori_nou), numarCorzi(numarCorzi_nou)
//{
//}

Guitar::Guitar(bool new_packed, std::string new_type, std::string new_brand, bool new_beginner, int new_nrStrings):Instrument(new_type, new_brand), beginner(new_beginner), nrStrings(new_nrStrings)
{
	this->packed = new_packed;
}

int Guitar::getNrStrings()
{
	return this->nrStrings;
}

void Guitar::play()
{
	std::cout << "You have to pinch and press the strings from " << this->type;
}

void Guitar::showDetails()
{
	Instrument::showDetails();
	std::cout << ", ";

	if (this->packed == true)
	{
		std::cout << "the guitar is packed!";
	}
	else
	{
		std::cout << "the guitar is not packed!";
	}
}

bool Guitar::operator==(const Guitar& guitar)
{
	return (this->beginner == guitar.beginner && this->nrStrings == guitar.nrStrings && this->packed == guitar.packed && this->brand == guitar.brand && this->type == guitar.type);
}


