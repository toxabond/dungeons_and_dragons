#pragma once
#include "HeroeSkills.h"
class Randomizer
{
public:
	Randomizer();
	int Random(HeroeSkills& characties, CheckBy check_by);
	~Randomizer();
};

