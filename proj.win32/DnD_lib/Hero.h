#pragma once
#include "HeroeSkills.h"
#include <string>
using namespace std;

class Hero
{
public:
	string name;

	HeroeSkills charactes;

	Hero();
	Hero(const Hero &obj);
	~Hero();
};

