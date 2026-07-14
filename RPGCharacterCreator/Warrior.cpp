#include "Warrior.h"
#include <iostream>

Warrior::Warrior(const std::string& name) : Character(name, 160, Stats{ 16, 12, 8 })
{
}

void Warrior::Attack()
{
	std::cout << name << " swings their great sword!" << std::endl;
}