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
	Hero& xarsk = creator.CreateXarsk();
	Hero& ezren = creator.CreateEzren();

	
	//mersiel.name = "Vasyia";

	


	//delete mersiel;
	//mersiel = nullptr;


	//����� ������������ � CheckBy::���������
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
