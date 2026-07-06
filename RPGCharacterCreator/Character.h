#pragma once
#include <string>

class Character
{
protected:
	std::string name;
	int level;
	int health;

	struct Stats
	{
		int strength;
		int dexterity;
		int constitution;
		int intelligence;
		int wisdom;
		int charisma;
	};

public:
	Character(const std::string& name, int level, int health);

	virtual void Attack() = 0;
	virtual void DisplayStats() const;

	void TakeDamage(int damage);
	void Heal(int amount);
	bool IsAlive() const;

	virtual ~Character() = default;
};

