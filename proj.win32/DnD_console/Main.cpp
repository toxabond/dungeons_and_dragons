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




	mersiel.name = "Vasyia2";
	delete &mersiel;

	srand(time(0)); // �������������� ������������
	cout << "1-random number = " << 1 + rand() % 3 << endl; // ������ ������ ���������� ��������� �����


}






int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	StartUp();
	system("PAUSE");

}
