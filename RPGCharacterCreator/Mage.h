#pragma once
#include "Character.h"
#include <iostream>

class Mage :
    public Character
{

public:
	Mage(const std::string& name) : Character(name, maxHealth, stats) {
		Character::maxHealth = 80;
		Character::stats = { 8, 12, 16 };
		std::cout << "Mage " << name << " created" << std::endl;
	};
	
	void Attack() override {
		std::cout << name << " casts fireball!" << std::endl;
	};

	

};

