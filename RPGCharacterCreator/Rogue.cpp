#include "Rogue.h"
#include <iostream>

Rogue::Rogue(const std::string& name) : Character(name, 120, Stats{ 10, 16, 10 })
{
}

void Rogue::Attack()
{
	std::cout << name << " uses backstab!" << std::endl;
}