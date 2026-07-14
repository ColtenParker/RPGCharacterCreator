#pragma once
#include "Stats.h"
#include <string>

class Character
{
protected:
	std::string name;
	int maxHealth;
	Stats stats;
	int currentHealth;


public:
	Character(const std::string& name, int maxHealth, Stats stats);

	virtual void Attack() = 0;
	virtual void DisplayStats() const;

	void getCurrentHealth() const;

	void TakeDamage(int damage);
	void Heal(int amount);
	bool IsAlive() const;

	virtual ~Character() = default;
};

