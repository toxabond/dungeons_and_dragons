#pragma once

#include "Hero.h"

class HeroeFactory
{
public:
	HeroeFactory();
	Hero& CreateMersiel();
	Hero& CreateXarsk();
	~HeroeFactory();
};
