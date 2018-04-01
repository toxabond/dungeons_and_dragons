#include "HeroeFactory.h"
#include "Hero.h"


HeroeFactory::HeroeFactory()
{
}

Hero& HeroeFactory::CreateMersiel()
{
	Hero* mersiel = new Hero();
	mersiel->name = "Μεπρθελό";
	mersiel->charactes.strength = 8;
	
	return *mersiel;

}

Hero HeroeFactory::CreateXarsk()
{

	return Hero();
}


HeroeFactory::~HeroeFactory()
{
}
