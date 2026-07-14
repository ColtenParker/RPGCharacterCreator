#include <iostream>
#include "Character.h"


Character::Character(const std::string& name, int maxHealth, Stats stats) : name(name), maxHealth(maxHealth), stats(stats)
{
}

void Character::DisplayStats() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Max Health: " << maxHealth << std::endl << std::endl;
	std::cout << "Stats " << std::endl;
	std::cout << "Strength: " << stats.strength << std::endl;
	std::cout << "Dexterity: " << stats.dexterity << std::endl;
	std::cout << "Intelligence: " << stats.intelligence << std::endl;
}
