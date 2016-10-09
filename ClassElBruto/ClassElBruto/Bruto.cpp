#include <iostream>

#include "Bruto.h"

Bruto::Bruto()
{}

Bruto::~Bruto()
{}

void Bruto::SetName()
{
	char* a = "Asier";
	std::cin >> a;
	name = a;
}

void Bruto::GetName()
{
	std::cout << *name << std::endl;
}

