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
	HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);
	DWORD prev_mode;
	GetConsoleMode(hInput, &prev_mode);
	SetConsoleMode(hInput, prev_mode & ENABLE_EXTENDED_FLAGS);
	srand(time(nullptr));
	system("title Tetris");
	while (true)
	{
		Menu();

		char** field = new char* [20];
		int** ColoursData = new int* [20];
		Init(field, ColoursData);
		Fill(field, ColoursData);

		int sleep{ 100 }, points{ 0 }, levelpoints{ 100 }, level{ 1 }, BurnedStrings{ 0 };
		bool Escape{ false };
		while (true)
		{
			int I1{ 0 }, J1{ 0 }, I2{ 0 }, J2{ 0 }, I3{ 0 }, J3{ 0 }, I4{ 0 }, J4{ 0 }, Rand = rand() % 7, pos{ 1 }, swap{ 1 };
			bool GameOver{ false };

			StringsBurning(field, sleep, points, levelpoints, level, BurnedStrings, ColoursData);

			Figure(field, I1, J1, I2, J2, I3, J3, I4, J4, Rand, GameOver, ColoursData, level, points);

			if (GameOver == true)
			{
				Sleep(500);
				system("cls");
				break;
			}


			while (true)
			{
				bool BREAK{ false };
				CheckDown(field, I1, J1, I2, J2, I3, J3, I4, J4, Rand, pos, BREAK);
				if (BREAK == true) break;

				bool NoSleep{ false };
				for (int i = 0; i < 20; i++)
				{
					fflush(stdin);
					WASDE(field, I1, J1, I2, J2, I3, J3, I4, J4, sleep, Rand, pos, swap, NoSleep, GameOver, ColoursData, level, points, Escape);
				}
				if (Escape == true) break;

				CheckDown(field, I1, J1, I2, J2, I3, J3, I4, J4, Rand, pos, BREAK);
				if (BREAK == true) break;

				Down(field, I1, J1, I2, J2, I3, J3, I4, J4, Rand, ColoursData, level, points);

				CheckDown(field, I1, J1, I2, J2, I3, J3, I4, J4, Rand, pos, BREAK);
				if (BREAK == true) break;
			}
			if (Escape == true) break;
		}

		GameOver(level, points, BurnedStrings);

		Delete(field, ColoursData);
	}


	return 0;
}
