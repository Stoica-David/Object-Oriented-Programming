#include<iostream>
#include<vector>
#include "Instrument.h"
#include "Pian.h"
#include "Chitara.h"

bool operator<(Guitar guitar1, Guitar guitar2)
{
	return guitar1.getNrStrings() < guitar2.getNrStrings();
}

void getReadyForConcert(std::vector<Instrument*> instrumentVector)
{
	for (int index = 0; index < instrumentVector.size(); index++)
	{
		Piano* pianoCast = dynamic_cast<Piano*>(instrumentVector[index]);
		Guitar* guitarCast = dynamic_cast<Guitar*>(instrumentVector[index]);

		if (pianoCast != nullptr)
		{
			pianoCast->tunePiano();
			std::cout << std::endl;
		}

		if (guitarCast != nullptr)
		{
			guitarCast->unbox();
			std::cout << std::endl;
		}
	}

	for (int index = 0; index < instrumentVector.size(); index++)
	{
		instrumentVector[index]->showDetails();
		std::cout << std::endl;
	}
}

int main()
{
	std::cout << "Section I:\n";

	Piano myPiano("A", "Jordan");
	Guitar myGuitar(true, "B", "Reebok");

	myPiano.showDetails();
	std::cout << std::endl;
	myGuitar.showDetails();

	std::cout << "\n\nSection II:\n";

	Guitar yourGuitar(true, "B", "Reebok");
	Guitar hisGuitar(false, "B", "Reebok", true, 7);

	std::cout << "4. ";
	if (myGuitar == yourGuitar)
	{
		std::cout << "My guitar is the same as yours!\n";
	}
	else
	{
		std::cout << "My guitar is not the same as yours!\n";
	}

	if (myGuitar == hisGuitar)
	{
		std::cout << "My guitar is the same as his!\n";
	}
	else
	{
		std::cout << "My guitar is not the same as his!\n";
	}

	std::cout << "5. ";

	if (myGuitar < yourGuitar)
	{
		std::cout << "My guitar has less strings than yours!\n";
	}
	else
	{
		std::cout << "My guitar has more (or the same amount) strings than yours!\n";
	}

	if (myGuitar < hisGuitar)
	{
		std::cout << "My guitar has less strings than his!\n";
	}
	else
	{
		std::cout << "My guitar has more (or the same amount) strings than his!\n";
	}

	std::cout << "\n\nSection III:\n";

	myPiano.play();
	std::cout << std::endl;

	myGuitar.play();
	std::cout << std::endl;

	std::cout << "\n\nSection IV:\n";

	myPiano.showDetails();
	std::cout << std::endl;
	myGuitar.showDetails();

	std::cout << "\n\nSection V:\n";

	std::vector<Instrument*> instrumentVector;

	Piano* piano1 = new Piano("A", "Nike", false);
	Piano* piano2 = new Piano("B", "Adidas");
	Guitar* guitar1 = new Guitar(true, "C", "Toyota");
	Guitar* guitar2 = new Guitar(false, "D", "Audi", false, 5);

	instrumentVector.push_back(piano1);
	instrumentVector.push_back(piano2);
	instrumentVector.push_back(guitar1);
	instrumentVector.push_back(guitar2);

	std::cout << "1.";
	for (int index = 0; index < instrumentVector.size(); index++)
	{
		instrumentVector[index]->showDetails();
		std::cout << std::endl;
	}
	std::cout << "\n2.";

	getReadyForConcert(instrumentVector);

	return 0;
}