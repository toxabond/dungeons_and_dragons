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
		default:
		break;
	}

	int resault = 1 + rand() % value;
	return resault;
}


Randomizer::~Randomizer()
{
}
