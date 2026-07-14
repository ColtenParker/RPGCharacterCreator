#include <iostream>
#include <string>
#include "Character.h"
#include "Mage.h"
#include "Warrior.h"
#include "Rogue.h"

using namespace std;

int main()
{
	cout << "RPG Character Creator" << endl << endl;
	Mage gandalf("Gandalf");
	gandalf.DisplayStats();
	gandalf.Attack();

	Warrior aragorn("Aragorn");
	aragorn.DisplayStats();
	aragorn.Attack();

	Rogue legolas("Legolas");
	legolas.DisplayStats();
	legolas.Attack();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

