#pragma once
#include "Character.h"

class Rogue :
	public Character
{

public:
	Rogue(const std::string& name);

	void Attack() override;



};

