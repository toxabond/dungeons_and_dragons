#pragma once

enum CheckBy
{
	strength,
	dexterity,
	constitution,
	intelegence,
	wisdom,
	charisma
};

class HeroeSkills
{
public:
	int strength;
	int dexterity;
	int constitution;
	int itelligence;
	int wisdom;
	int charisma;
	HeroeSkills();
	~HeroeSkills();
};

