#include "Character.h"

Character::Character(const std::string& name, int level, int health)
{
	this->name = name;
	this->level = level;
	this->health = health;
}

void Character::DisplayStats() const
{
}

