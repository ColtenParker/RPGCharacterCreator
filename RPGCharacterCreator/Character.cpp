#include <iostream>
#include "Character.h"


Character::Character(const std::string& name, int maxHealth, Stats stats) : name(name), maxHealth(maxHealth), stats(stats), currentHealth(maxHealth)
{
}

void Character::DisplayStats() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Health: " << currentHealth << "/" << maxHealth << std::endl << std::endl;
	std::cout << "Stats " << std::endl;
	std::cout << "Strength: " << stats.strength << std::endl;
	std::cout << "Dexterity: " << stats.dexterity << std::endl;
	std::cout << "Intelligence: " << stats.intelligence << std::endl;
}

void Character::getCurrentHealth() const
{
	std::cout << "Current Health: " << currentHealth << "/" << maxHealth << std::endl;
}

void Character::TakeDamage(int damage)
{
	int temp = currentHealth;

	if (currentHealth <= 0)
	{
		std::cout << name << " is already dead and cannot take more damage." << std::endl;
		return;
	}
	else if (damage <= 0)
	{
		std::cout << "Damage must be more than 0." << std::endl;
		return;
	}

	currentHealth -= damage;

	if (currentHealth < 0)
	{
		currentHealth = 0;
	}

	std::cout << name << " took " << (temp - currentHealth) << " damage." << std::endl;
}

void Character::Heal(int amount)
{
	int temp = currentHealth;
	
	if (currentHealth <= 0)
	{
		std::cout << name << " is dead and cannot be healed." << std::endl;
		return;
	}
	else if (amount <= 0)
	{
		std::cout << "Heal amount must be more than 0." << std::endl;
		return;
	}

	currentHealth += amount;

	if (currentHealth > maxHealth)
	{
		currentHealth = maxHealth;
	}

	std::cout << name << " healed for " << (currentHealth - temp) << " health." << std::endl;
}

bool Character::IsAlive() const
{
	return currentHealth > 0;
}
