#pragma once
#include "Character.h"

class Warrior :
	public Character
{

public:
	Warrior(const std::string& name);

	void Attack() override;



};

