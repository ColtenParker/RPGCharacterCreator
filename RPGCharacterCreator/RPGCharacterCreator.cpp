#include <iostream>
#include <string>
#include "Mage.h"
#include "Character.h"

using namespace std;

int main()
{
    cout << "RPG Character Creator" << endl << endl;
	Mage gandalf("Gandalf");
	gandalf.DisplayStats();
	gandalf.Attack();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

