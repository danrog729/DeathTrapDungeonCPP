#include "heroes.h"
#include <string>



/// <summary>
/// Hero class definition
/// </summary>
Hero::Hero(std::string newName, int newMaxHP)
{
	name = newName;
	maxHP = newMaxHP;
	currentHP = maxHP;
	gold = 0;
}



/// <summary>
/// Barbarian class definition
/// </summary>
Barbarian::Barbarian(std::string newName) : Hero(newName, 30)
{
	
}



/// <summary>
/// Wizard class definition
/// </summary>
Wizard::Wizard(std::string newName) : Hero(newName, 25)
{

}



/// <summary>
/// Warlock class definition
/// </summary>
Warlock::Warlock(std::string newName) : Hero(newName, 27)
{

}
