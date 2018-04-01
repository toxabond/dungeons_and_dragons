/**
Copyright (c) 2018
*/




#include <iostream>
#include <ctime>
#include "HeroeFactory.h"
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
	mersiel.name = "Vasyia";
	//delete mersiel;
	//mersiel = nullptr;




	mersiel.name = "Vasyia2";
	delete &mersiel;

	srand(time(0)); // автоматическая рандомизация
	cout << "1-random number = " << 1 + rand() % 3 << endl; // первый запуск генератора случайных чисел


}






int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	StartUp();
	system("PAUSE");

}
