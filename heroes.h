#ifndef HEROES_H
#define HEROES_H
#include <string>

class Hero
{
private:
	std::string name;
	int maxHP;
	int currentHP;
	int gold;

public:
	Hero(std::string newName, int newMaxHP);
};

class Barbarian : Hero
{
public:
	Barbarian(std::string newName);
};

class Wizard : Hero
{
public:
	Wizard(std::string newName);
};

class Warlock : Hero
{
public:
	Warlock(std::string newName);
};

#endif