#include "Portabil.h"

Portable::Portable()
{
}

Portable::Portable(bool ambalat_nou)
{
	this->packed = ambalat_nou;
}

void Portable::unbox()
{
	if (this->packed == true)
	{
		this->packed = false;
	}
	else
	{
		std::cout << "already unboxed";
	}
}
