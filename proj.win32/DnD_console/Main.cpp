/**
Copyright (c) 2018
*/




#include <iostream>
#include "HeroeFactory.h"
#include "Randomizer.h"
#include "Hero.h"

void StartUp() {
	/*
	Hero xarsk;
	xarsk.name = "Харск";

	Hero* mersiel = new Hero();
	mersiel->name = "Мерсиель";

	//Hero& _mersiel = *mersiel;
	//_mersiel.name = "Мерсиель2";

	//Hero& _mersiel2 = xarsk;
	//_mersiel2.name = "Харск2";

	*/
	HeroeFactory creator;
	Hero& mersiel = creator.CreateMersiel();
	Hero& xarsk = creator.CreateXarsk();
	Hero& ezren = creator.CreateEzren();

	
	//mersiel.name = "Vasyia";

	


	//delete mersiel;
	//mersiel = nullptr;


	//вызов рандомайзера с CheckBy::атрибутом
	Randomizer  random;
	int znach = random.Random(ezren.charactes,CheckBy::intelegence);
	cout << znach;

//	mersiel.name = "Vasyia2";

	delete &mersiel;
	delete &xarsk;
	delete &ezren;
	
	

}






int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	StartUp();
	system("PAUSE");

}
