#pragma once
#include<iostream>

class Portable
{
protected:
	bool packed;

public:
	Portable();
	Portable(bool);

	void unbox();

};

