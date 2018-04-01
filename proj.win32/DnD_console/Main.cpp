/**
Copyright (c) 2018
*/




#include <iostream>

#include "Hero.h"








int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	Hero xarsk;
	xarsk.name = "Υΰπρκ";

	Hero* mersiel = new Hero();
	mersiel->name = "Μεπρθελό";

	//Hero& _mersiel = *mersiel;
	//_mersiel.name = "Μεπρθελό2";

	//Hero& _mersiel2 = xarsk;
	//_mersiel2.name = "Υΰπρκ2";



	
	delete mersiel;
	mersiel = nullptr;
	
	
	
	system("PAUSE");
	




}
