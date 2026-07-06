#pragma once
#include "Character.h"
#include <iostream>

class Mage :
    public Character
{
	Stats stats = { 8, 16, 14, 16, 10, 10 };
	int maxHealth = getMaxHealth(stats.constitution);

public:
	Mage(std::string& name, int level, int health, int maxHealth) : Character(name, level, health), maxHealth(maxHealth) {}
	
	void Attack() override {
		std::cout << name << " casts fireball!" << std::endl;
	};

	int getMaxHealth(int consitution);
};

