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
	xarsk.name = "�����";

	Hero* mersiel = new Hero();
	mersiel->name = "��������";

	//Hero& _mersiel = *mersiel;
	//_mersiel.name = "��������2";

	//Hero& _mersiel2 = xarsk;
	//_mersiel2.name = "�����2";

	*/
	HeroeFactory creator;
	Hero& mersiel = creator.CreateMersiel();
	mersiel.name = "Vasyia";
	//delete mersiel;
	//mersiel = nullptr;


	Randomizer  random;
	int znach = random.Random(mersiel.charactes,CheckBy::strength);
	cout << znach;

	mersiel.name = "Vasyia2";
	delete &mersiel;

	

}






int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	StartUp();
	system("PAUSE");

}
