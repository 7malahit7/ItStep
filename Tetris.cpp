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
			if (field[I1 + 1][J1] == '@' && I1 + 1 != I2 && I1 + 1 != I3 && I1 + 1 != I4 && J1 != J2 && J1 != J3 && J1 != J4 || field[I2 + 1][J2] == '@' && I2 + 1 != I1 && I2 + 1 != I3 && I2 + 1 != I4 && J2 != I1 && J2 != J3 && J2 != J4 || field[I3 + 1][J3] == '@' && I3 + 1 != I1 && I3 + 1 != I2 && I3 + 1 != I4 && J3 != J1 && J3 != J2 && J3 != J4 || field[I4 + 1][J4] == '@' && I4 + 1 != I1 && I4 + 1 != I2 && I4 + 1 != I3 && J4 != J1 && J4 != J2 && J4 != J3) break;
			
			int slp{ 0 };
			char WASDE = ' ';
			if (_kbhit())
			{
				WASDE = _getch();
				if (WASDE == 'a' || WASDE == 'A' || WASDE == 'ô' || WASDE == 'Ô')
				{
					bool doleft{ true };
					if (field[I1][J1 - 1] == '@' && J1 - 1 != J2 && J1 - 1 != J3 && J1 - 1 != J4 || field[I2][J2 - 1] == '@' && J2 - 1 != I1 && J2 - 1 != J3 && J2 - 1 != J4 || field[I3][J3 - 1] == '@' && J3 - 1 != J1 && J3 - 1 != J2 && J3 - 1 != J4 || field[I4][J4 - 1] == '@' && J4 - 1 != J1 && J4 - 1 != J2 && J4 - 1 != J3 || J1 == 0 || J2 == 0 || J3 == 0 || J4 == 0) doleft = false;
					if (doleft == true)
					{
						Left(field, I1, J1, I2, J2, I3, J3, I4, J4);
					}
				}

				if (WASDE == 's' || WASDE == 'S' || WASDE == 'û' || WASDE == 'Û')
				{
					slp = 490;
				}

				if (WASDE == 'd' || WASDE == 'D' || WASDE == 'â' || WASDE == 'Â')
				{
					bool doright{ true };
					if (field[I1][J1 + 1] == '@' && J1 + 1 != J2 && J1 + 1 != J3 && J1 + 1 != J4 || field[I2][J2 + 1] == '@' && J2 + 1 != I1 && J2 + 1 != J3 && J2 + 1 != J4 || field[I3][J3 + 1] == '@' && J3 + 1 != J1 && J3 + 1 != J2 && J3 + 1 != J4 || field[I4][J4 + 1] == '@' && J4 + 1 != J1 && J4 + 1 != J2 && J4 + 1 != J3 || J1 == 9 || J2 == 9 || J3 == 9 || J4 == 9) doright = false;
					if (doright == true)
					{
						Right(field, I1, J1, I2, J2, I3, J3, I4, J4);
					}
				}
			}

			if (field[I1 + 1][J1] == '@' && I1 + 1 != I2 && I1 + 1 != I3 && I1 + 1 != I4 && J1 != J2 && J1 != J3 && J1 != J4 || field[I2 + 1][J2] == '@' && I2 + 1 != I1 && I2 + 1 != I3 && I2 + 1 != I4 && J2 != I1 && J2 != J3 && J2 != J4 || field[I3 + 1][J3] == '@' && I3 + 1 != I1 && I3 + 1 != I2 && I3 + 1 != I4 && J3 != J1 && J3 != J2 && J3 != J4 || field[I4 + 1][J4] == '@' && I4 + 1 != I1 && I4 + 1 != I2 && I4 + 1 != I3 && J4 != J1 && J4 != J2 && J4 != J3) break;

			Down(field, I1, J1, I2, J2, I3, J3, I4, J4);
			Sleep(500 - slp);
		}
		system("cls");
	}
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tGAME OVER!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	return 0;
}