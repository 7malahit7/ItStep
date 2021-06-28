#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>
#include "functions.h"

using namespace std;

int main()
{
	setlocale(0, "");
	srand(time(nullptr));

	char** field = new char* [20];
	Init(field);
	Fill(field);

	while (true)
	{
		int I1{ 0 }, J1{ 0 }, I2{ 0 }, J2{ 0 }, I3{ 0 }, J3{ 0 }, I4{ 0 }, J4{ 0 };
		bool GameOver{ false };

		Figure(field, I1, J1, I2, J2, I3, J3, I4, J4, GameOver);
		Print(field);

		if (GameOver == true)
		{
			system("cls");
			break;
		}

		while (I1 < 19 && I2 < 19 && I3 < 19 && I4 < 19)
		{
			if (field[I1 + 1][J1] == '@' && I1 + 1 != I2 && I1 + 1 != I3 && I1 + 1 != I4 || field[I2 + 1][J2] == '@' && I2 + 1 != I1 && I2 + 1 != I3 && I2 + 1 != I4 || field[I3 + 1][J3] == '@' && I3 + 1 != I1 && I3 + 1 != I2 && I3 + 1 != I4 || field[I4 + 1][J4] == '@' && I4 + 1 != I1 && I4 + 1 != I2 && I4 + 1 != I3) break;

			field[I1][J1] = '*';
			field[I2][J2] = '*';
			field[I3][J3] = '*';
			field[I4][J4] = '*';

			++I1; ++I2; ++I3; ++I4;
			
			field[I1][J1] = '@';
			field[I2][J2] = '@';
			field[I3][J3] = '@';
			field[I4][J4] = '@';

			Sleep(300);
			system("cls");
			Print(field);
		}
		system("cls");
	}
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tGAME OVER!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	return 0;
}