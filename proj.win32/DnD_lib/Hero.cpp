#include "Hero.h"
#include <iostream>


Hero::Hero()
{
	std::cout <<"create hero"<<endl;
}

Hero::Hero(const Hero & obj)
{
	cout << "clone hero"<<endl;
}


Hero::~Hero()
{
	cout << "deleateHero"<<endl;
}
