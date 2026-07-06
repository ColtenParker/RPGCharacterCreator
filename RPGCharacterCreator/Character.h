#pragma once
#include <string>

class Character
{
protected:
	std::string name;
	int level;
	int health;
	int mana;

public:
	Character(const std::string& name);

	virtual void Attack() = 0;
	virtual void DisplayStats() const;

	void TakeDamage(int damage);
	void Heal(int amount);
	bool IsAlive() const;

	virtual ~Character() = default;
};

