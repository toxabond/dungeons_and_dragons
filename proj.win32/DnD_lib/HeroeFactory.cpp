#include "HeroeFactory.h"
#include "Hero.h"


HeroeFactory::HeroeFactory()
{
}

Hero& HeroeFactory::CreateMersiel()
{
	Hero* mersiel = new Hero();
	mersiel->name = "Мерсиель";
	mersiel->charactes.strength = 8;
	mersiel->charactes.dexterity = 12;
	mersiel->charactes.constitution = 6;
	mersiel->charactes.itelligence = 4;
	mersiel->charactes.wisdom = 6;
	mersiel->charactes.charisma = 6;
	return *mersiel;

}

Hero& HeroeFactory::CreateXarsk()
{
	Hero* xarsk = new Hero();
	xarsk->name = "Харск";
	xarsk->charactes.strength = 6;
	xarsk->charactes.dexterity = 8;
	xarsk->charactes.constitution = 12;
	xarsk->charactes.itelligence = 6;
	xarsk->charactes.wisdom = 6;
	xarsk->charactes.charisma = 4;
	return *xarsk;
}

Hero& HeroeFactory::CreateEzren()
{
	Hero* ezren = new Hero();
	ezren->name = "Эзрен";
	ezren->charactes.strength = 6;
	ezren->charactes.dexterity = 6;
	ezren->charactes.constitution = 4;
	ezren->charactes.itelligence = 12;
	ezren->charactes.wisdom = 8;
	ezren->charactes.charisma = 6;
	return *ezren;
}


HeroeFactory::~HeroeFactory()
{
}
