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
	mersiel->charactes.dexterity = 12;
	mersiel->charactes.constitution = 6;
	mersiel->charactes.itelligence = 4;
	mersiel->charactes.wisdom = 6;
	mersiel->charactes.charisma = 6;
	return *mersiel;

}

Hero& HeroeFactory::CreateXarsk()
{
	Hero* Xarsk = new Hero();
	Xarsk->name = "Υΰπρκ";
	Xarsk->charactes.strength = 6;
	Xarsk->charactes.dexterity = 8;
	Xarsk->charactes.constitution = 12;
	Xarsk->charactes.itelligence = 6;
	Xarsk->charactes.wisdom = 6;
	Xarsk->charactes.charisma = 4;
	return *Xarsk;

	return Hero();
}


HeroeFactory::~HeroeFactory()
{
}
