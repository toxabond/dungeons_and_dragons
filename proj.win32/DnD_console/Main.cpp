/**
Copyright (c) 2018
*/




#include <iostream>

#include "Hero.h"








int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	Hero xarsk;
	xarsk.name = "�����";

	Hero* mersiel = new Hero();
	mersiel->name = "��������";

	//Hero& _mersiel = *mersiel;
	//_mersiel.name = "��������2";

	//Hero& _mersiel2 = xarsk;
	//_mersiel2.name = "�����2";



	
	delete mersiel;
	mersiel = nullptr;
	
	
	
	system("PAUSE");
	




}
