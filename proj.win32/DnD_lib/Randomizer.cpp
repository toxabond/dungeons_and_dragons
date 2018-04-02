#include "Randomizer.h"
#include <ctime>
#include <iostream>
using namespace std;

Randomizer::Randomizer()
{
	srand(time(0)); // автоматическая рандомизация

}

int Randomizer::Random(HeroeSkills & skills, CheckBy check_by)
{
	int value;
	switch (check_by)
	{
		case CheckBy::strength:
			value = skills.strength;
			break;
		case CheckBy::dexterity:
			value = skills.dexterity;
			break;
		case CheckBy::constitution:
			value = skills.constitution;
			break;
		case CheckBy::intelegence:
			value = skills.itelligence;
			break;
		case CheckBy::wisdom:
			value = skills.wisdom;
			break;
		case CheckBy::charisma:
			value = skills.charisma;
			break;
		default:
		break;
	}

	int resault = 1 + rand() % value;
	return resault;
}


Randomizer::~Randomizer()
{
}
