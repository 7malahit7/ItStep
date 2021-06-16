#include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include "functions.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(nullptr));

	char** field = new char* [20];
	Init(field);
	Fill(field);

	while (true)
	{
		int I1{ 0 }, J1{ 0 }, I2{ 0 }, J2{ 0 }, I3{ 0 }, J3{ 0 }, I4{ 0 }, J4{ 0 }, Rand = rand() % 7, pos{ 1 }, swap{ 1 }, slp{ 0 }, sleep{ 0 }, points{ 0 }, levelpoints{ 100 }, level{ 1 }, speedcontrol{ 0 };
		bool GameOver{ false };

		Figure(field, I1, J1, I2, J2, I3, J3, I4, J4, Rand, GameOver);
		Print(field);

		if (GameOver == true)
		{
			Sleep(500);
			system("cls");
			break;
		}


		while (I1 < 19 && I2 < 19 && I3 < 19 && I4 < 19)
		{
			for (int i = 0; i < 20; i++)
			{
				Sleep(100 - slp);
				WASDE(field, I1, J1, I2, J2, I3, J3, I4, J4, slp, Rand, pos, swap, GameOver);
			}

			bool BREAK{ false };
			Check(field, I1, J1, I2, J2, I3, J3, I4, J4,Rand, pos, BREAK);
			if (BREAK == true) break;

			Down(field, I1, J1, I2, J2, I3, J3, I4, J4);

			Check(field, I1, J1, I2, J2, I3, J3, I4, J4, Rand, pos, BREAK);
			if (BREAK == true) break;
		}
		system("cls");
	}
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tGAME OVER!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	return 0;
}
