#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

void MainMenu()
{
	system("color B4");
	cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t_______________________________________________________________________________________________\n"; Sleep(200);
	cout << "\t\t\t\t\t\t\t|                                                                                             |\n"; Sleep(200);
	cout << "\t\t\t\t\t\t\t|                                                                                             |\n"; Sleep(200);
	cout << "\t\t\t\t\t\t\t|                                                                                             |\n"; Sleep(200);
	cout << "\t\t\t\t\t\t\t|                                                                                             |\n"; Sleep(200);
	cout << "\t\t\t\t\t\t\t|         /-------\\    /-------|  /-------\\      /------\\       /\\     /----\\                 |\n"; Sleep(200);
	cout << "\t\t\t\t\t\t\t|             |        |              |          |      |       \\/     |     |                |\n"; Sleep(200);
	cout << "\t\t\t\t\t\t\t|             |        |              |          |      |       ||     |                      |\n"; Sleep(200);
	cout << "\t\t\t\t\t\t\t|             |        |-----|        |          |------/       ||     \\-----\\                |\n"; Sleep(200);
	cout << "\t\t\t\t\t\t\t|             |        |              |          |\\_            ||           |                |\n"; Sleep(200);
	cout << "\t\t\t\t\t\t\t|             |        |              |          |  \\_          ||     |     |                |\n"; Sleep(200);
	cout << "\t\t\t\t\t\t\t|             |        \\-------|      |          |    \\__       ||     \\-----/                |\n"; Sleep(200);
	cout << "\t\t\t\t\t\t\t|                                                                                             |\n"; Sleep(200);
	cout << "\t\t\t\t\t\t\t|                                                                                             |\n"; Sleep(200);
	cout << "\t\t\t\t\t\t\t|                                                                                             |\n"; Sleep(200);
	cout << "\t\t\t\t\t\t\t|_____________________________________________________________________________________________|\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t     Н а ж м и т е   E N T E R ,   ч т о б ы   н а ч а т ь .";
	cout << "\n\n\n\n\t\t\t\t\t\t\t     Н а ж м и т е   П Р О Б Е Л ,   ч т о б ы   п о с м о т р е т ь   у п р а в л е н и е .";
	cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t      Н а ж м и т е   E S C ,   ч т о б ы   в ы й т и .\n";
}

void Menu()
{
	while (true)
	{
		MainMenu();

		char Enter = '.';

		while (Enter != 13 && Enter != 27 && Enter != 32)
		{
			Enter = _getch();
		}

		if (Enter == 13) break;

		if (Enter == 27)
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tД О   Н О В О Й   В С Т Р Е Ч И   В   И Г Р Е !\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			exit(0);
		}

		if (Enter == 32)
		{
			system("cls");
			cout << "\n\n\n\n\n\n\t\t\t\t\t\t      У          П          Р          А          В          Л          Е          Н          И          Е";
			cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tW ( Ц ) — Смена текущей на другую случайную фигуру\n\t\t\t\t\t\t\t\t\t\t*[ работает в первые секунды появления фигуры ]\n\n\n\n\n\n"; Sleep(200);
			cout << "\t\t\t\t\t\t\t\t\tA ( Ф ) — Движение налево\n\n\n\n\n\n"; Sleep(200);
			cout << "\t\t\t\t\t\t\t\t\tS ( Ы ) — Движение вниз\n\n\n\n\n\n"; Sleep(200);
			cout << "\t\t\t\t\t\t\t\t\tD ( В ) — Движение направо\n\n\n\n\n\n"; Sleep(200);
			cout << "\t\t\t\t\t\t\t\t\tE ( У ) — Переворот фигуры\n\n\n\n\n\n\n\n\n"; Sleep(200);
			cout << "\t\t\t\t\t\t\t\tН а ж м и т е   П Р О Б Е Л ,   ч т о б ы   в е р н у т ь с я   в   м е н ю\n";

			char Space = '.';
			while (Space != 32)
			{
				Space = _getch();
			}
			system("cls");
		}
	}
	system("color F1");
}

void GameOver(int level, int points, int BurnedStrings)
{
	system("color B4");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t    G  A  M  E     O  V  E  R  !\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t_________________________________________________\n";
	cout << "\t\t\t\t\t\t\t\t\t\t|                       |                       |\n";
	cout << "\t\t\t\t\t\t\t\t\t\t|        Уровень        |                       |\n";
	cout << "\t\t\t\t\t\t\t\t\t\t|_______________________|_______________________|\n";
	cout << "\t\t\t\t\t\t\t\t\t\t|                       |                       |\n";
	cout << "\t\t\t\t\t\t\t\t\t\t|         Баллы         |                       |\n";
	cout << "\t\t\t\t\t\t\t\t\t\t|_______________________|_______________________|\n";
	cout << "\t\t\t\t\t\t\t\t\t\t|                       |                       |\n";
	cout << "\t\t\t\t\t\t\t\t\t\t|     Сожжено линий     |                       |\n";
	cout << "\t\t\t\t\t\t\t\t\t\t|_______________________|_______________________|";

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cursor;

	cursor.Y = 30;
	if (level < 100) cursor.X = 116;
	if (level >= 100) cursor.X = 115;
	SetConsoleCursorPosition(h, cursor);
	cout << level;

	cursor.Y = 33;
	if (points == 0) cursor.X = 116;
	if (points >= 100 && points < 10000) cursor.X = 115;
	if (points >= 10000) cursor.X = 114;
	SetConsoleCursorPosition(h, cursor);
	cout << points;

	cursor.Y = 36;
	if (BurnedStrings < 100) cursor.X = 116;
	if (BurnedStrings >= 100) cursor.X = 115;
	SetConsoleCursorPosition(h, cursor);
	cout << BurnedStrings;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  Н а ж м и т е   E N T E R ,   ч т о б ы   в е р н у т ь с я   в   м е н ю .\n";

	char Continue = ' ';
	while (Continue != 13)
	{
		Continue = _getch();
	}
	system("cls");
}

void Init(char** field, int** ColoursData)
{
	for (int i = 0; i < 20; i++)
	{
		field[i] = new char[10];
	}

	for (int i = 0; i < 20; i++)
	{
		ColoursData[i] = new int[10];
	}
}

void Fill(char** field, int** ColoursData)
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			field[i][j] = '*';
		}
	}

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			ColoursData[i][j] = 1;
		}
	}
}

void Print(char** field, int** ColoursData, int level, int points)
{
	cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tУ Р О В Е Н Ь  " << level << "\tО Ч К И  " << points;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\t   +-------------------------------------------+\n\n";
	for (int i = 0; i < 20; i++)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t   |   ";
		for (int j = 0; j < 10; j++)
		{
			SetConsoleTextAttribute(h, (((15 << 4) | ColoursData[i][j])));
			cout << field[i][j] << "   ";
		}
		SetConsoleTextAttribute(h, (((15 << 4) | 1)));
		cout << "|";
		if (i == 19) cout << "\n\n\t\t\t\t\t\t\t\t\t\t   +-------------------------------------------+";
		cout << "\n\n";
	}
}

void S(char** field)
{
	field[0][4] = '@';
	field[0][5] = '@';
	field[1][3] = '@';
	field[1][4] = '@';
}

void Z(char** field)
{
	field[0][3] = '@';
	field[0][4] = '@';
	field[1][4] = '@';
	field[1][5] = '@';
}

void T(char** field)
{
	field[0][3] = '@';
	field[0][4] = '@';
	field[0][5] = '@';
	field[1][4] = '@';
}

void L(char** field)
{
	field[0][4] = '@';
	field[1][4] = '@';
	field[2][4] = '@';
	field[2][5] = '@';
}

void J(char** field)
{
	field[0][4] = '@';
	field[1][4] = '@';
	field[2][4] = '@';
	field[2][3] = '@';
}

void O(char** field)
{
	field[0][4] = '@';
	field[0][5] = '@';
	field[1][4] = '@';
	field[1][5] = '@';
}
void I(char** field)
{
	field[0][4] = '@';
	field[1][4] = '@';
	field[2][4] = '@';
	field[3][4] = '@';
}

int Figure(char** field, int& I1, int& J1, int& I2, int& J2, int& I3, int& J3, int& I4, int& J4, int Rand, bool& GameOver, int** ColoursData, int level, int points)
{
	switch (Rand)
	{
	case 0:
	{
		I1 = 0; J1 = 4;
		I2 = 0; J2 = 5;
		I3 = 1; J3 = 3;
		I4 = 1; J4 = 4;

		ColoursData[I1][J1] = 2;
		ColoursData[I2][J2] = 2;
		ColoursData[I3][J3] = 2;
		ColoursData[I4][J4] = 2;

		if (field[I1][J1] == '@' || field[I2][J2] == '@' || field[I3][J3] == '@' || field[I4][J4] == '@') GameOver = true;

		S(field);

		break;
	}

	case 1:
	{
		I1 = 0; J1 = 3;
		I2 = 0; J2 = 4;
		I3 = 1; J3 = 4;
		I4 = 1; J4 = 5;

		ColoursData[I1][J1] = 4;
		ColoursData[I2][J2] = 4;
		ColoursData[I3][J3] = 4;
		ColoursData[I4][J4] = 4;

		if (field[I1][J1] == '@' || field[I2][J2] == '@' || field[I3][J3] == '@' || field[I4][J4] == '@') GameOver = true;

		Z(field);

		break;
	}

	case 2:
	{
		I1 = 0; J1 = 3;
		I2 = 0; J2 = 4;
		I3 = 0; J3 = 5;
		I4 = 1; J4 = 4;

		ColoursData[I1][J1] = 5;
		ColoursData[I2][J2] = 5;
		ColoursData[I3][J3] = 5;
		ColoursData[I4][J4] = 5;

		if (field[I1][J1] == '@' || field[I2][J2] == '@' || field[I3][J3] == '@' || field[I4][J4] == '@') GameOver = true;

		T(field);

		break;
	}

	case 3:
	{
		I1 = 0; J1 = 4;
		I2 = 1; J2 = 4;
		I3 = 2; J3 = 4;
		I4 = 2; J4 = 5;

		ColoursData[I1][J1] = 12;
		ColoursData[I2][J2] = 12;
		ColoursData[I3][J3] = 12;
		ColoursData[I4][J4] = 12;

		if (field[I1][J1] == '@' || field[I2][J2] == '@' || field[I3][J3] == '@' || field[I4][J4] == '@') GameOver = true;

		L(field);

		break;
	}

	case 4:
	{
		I1 = 0; J1 = 4;
		I2 = 1; J2 = 4;
		I3 = 2; J3 = 4;
		I4 = 2; J4 = 3;

		ColoursData[I1][J1] = 6;
		ColoursData[I2][J2] = 6;
		ColoursData[I3][J3] = 6;
		ColoursData[I4][J4] = 6;

		if (field[I1][J1] == '@' || field[I2][J2] == '@' || field[I3][J3] == '@' || field[I4][J4] == '@') GameOver = true;

		J(field);

		break;
	}

	case 5:
	{
		I1 = 0; J1 = 4;
		I2 = 0; J2 = 5;
		I3 = 1; J3 = 4;
		I4 = 1; J4 = 5;

		ColoursData[I1][J1] = 13;
		ColoursData[I2][J2] = 13;
		ColoursData[I3][J3] = 13;
		ColoursData[I4][J4] = 13;

		if (field[I1][J1] == '@' || field[I2][J2] == '@' || field[I3][J3] == '@' || field[I4][J4] == '@') GameOver = true;

		O(field);

		break;
	}

	case 6:
	{
		I1 = 0; J1 = 4;
		I2 = 1; J2 = 4;
		I3 = 2; J3 = 4;
		I4 = 3; J4 = 4;

		ColoursData[I1][J1] = 3;
		ColoursData[I2][J2] = 3;
		ColoursData[I3][J3] = 3;
		ColoursData[I4][J4] = 3;

		if (field[I1][J1] == '@' || field[I2][J2] == '@' || field[I3][J3] == '@' || field[I4][J4] == '@') GameOver = true;

		I(field);

		break;
	}

	}

	system("cls");
	Print(field, ColoursData, level, points);

	return I1, J1, I2, J2, I3, J3, I4, J4, GameOver;
}

void Colour(int** ColoursData, int Rand, int& I1, int& J1, int& I2, int& J2, int& I3, int& J3, int& I4, int& J4)
{
	switch (Rand)
	{
	case 0:
	{
		ColoursData[I1][J1] = 2;
		ColoursData[I2][J2] = 2;
		ColoursData[I3][J3] = 2;
		ColoursData[I4][J4] = 2;

		break;
	}

	case 1:
	{
		ColoursData[I1][J1] = 4;
		ColoursData[I2][J2] = 4;
		ColoursData[I3][J3] = 4;
		ColoursData[I4][J4] = 4;

		break;
	}

	case 2:
	{
		ColoursData[I1][J1] = 5;
		ColoursData[I2][J2] = 5;
		ColoursData[I3][J3] = 5;
		ColoursData[I4][J4] = 5;

		break;
	}

	case 3:
	{
		ColoursData[I1][J1] = 12;
		ColoursData[I2][J2] = 12;
		ColoursData[I3][J3] = 12;
		ColoursData[I4][J4] = 12;

		break;
	}

	case 4:
	{
		ColoursData[I1][J1] = 6;
		ColoursData[I2][J2] = 6;
		ColoursData[I3][J3] = 6;
		ColoursData[I4][J4] = 6;

		break;
	}

	case 5:
	{
		ColoursData[I1][J1] = 13;
		ColoursData[I2][J2] = 13;
		ColoursData[I3][J3] = 13;
		ColoursData[I4][J4] = 13;

		break;
	}

	case 6:
	{
		ColoursData[I1][J1] = 3;
		ColoursData[I2][J2] = 3;
		ColoursData[I3][J3] = 3;
		ColoursData[I4][J4] = 3;

		break;
	}

	}
}

int Left(char** field, int& I1, int& J1, int& I2, int& J2, int& I3, int& J3, int& I4, int& J4, int Rand, int** ColoursData, int level, int points)
{
	field[I1][J1] = '*';
	field[I2][J2] = '*';
	field[I3][J3] = '*';
	field[I4][J4] = '*';

	ColoursData[I1][J1] = 1;
	ColoursData[I2][J2] = 1;
	ColoursData[I3][J3] = 1;
	ColoursData[I4][J4] = 1;

	--J1; --J2; --J3; --J4;

	field[I1][J1] = '@';
	field[I2][J2] = '@';
	field[I3][J3] = '@';
	field[I4][J4] = '@';

	Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

	system("cls");
	Print(field, ColoursData, level, points);

	return I1, J1, I2, J2, I3, J3, I4, J4;
}

int Down(char** field, int& I1, int& J1, int& I2, int& J2, int& I3, int& J3, int& I4, int& J4, int Rand, int** ColoursData, int level, int points)
{
	field[I1][J1] = '*';
	field[I2][J2] = '*';
	field[I3][J3] = '*';
	field[I4][J4] = '*';

	ColoursData[I1][J1] = 1;
	ColoursData[I2][J2] = 1;
	ColoursData[I3][J3] = 1;
	ColoursData[I4][J4] = 1;

	++I1; ++I2; ++I3; ++I4;

	field[I1][J1] = '@';
	field[I2][J2] = '@';
	field[I3][J3] = '@';
	field[I4][J4] = '@';

	Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

	system("cls");
	Print(field, ColoursData, level, points);

	return I1, J1, I2, J2, I3, J3, I4, J4;
}

int Right(char** field, int& I1, int& J1, int& I2, int& J2, int& I3, int& J3, int& I4, int& J4, int Rand, int** ColoursData, int level, int points)
{
	field[I1][J1] = '*';
	field[I2][J2] = '*';
	field[I3][J3] = '*';
	field[I4][J4] = '*';

	ColoursData[I1][J1] = 1;
	ColoursData[I2][J2] = 1;
	ColoursData[I3][J3] = 1;
	ColoursData[I4][J4] = 1;

	++J1; ++J2; ++J3; ++J4;

	field[I1][J1] = '@';
	field[I2][J2] = '@';
	field[I3][J3] = '@';
	field[I4][J4] = '@';

	Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

	system("cls");
	Print(field, ColoursData, level, points);

	return I1, J1, I2, J2, I3, J3, I4, J4;
}

int CheckDown(char** field, int I1, int J1, int I2, int J2, int I3, int J3, int I4, int J4, int Rand, int pos, bool& BREAK)
{
	if (I1 < 19 && I2 < 19 && I3 < 19 && I4 < 19)
	{
		switch (Rand)
		{
		case 0:
		{
			switch (pos)
			{
			case 1: { if (field[I2 + 1][J2] == '@' || field[I3 + 1][J3] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			case 2: { if (field[I2 + 1][J2] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			}

			break;
		}

		case 1:
		{
			switch (pos)
			{
			case 1: { if (field[I1 + 1][J1] == '@' || field[I3 + 1][J3] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			case 2: { if (field[I2 + 1][J2] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			}

			break;
		}

		case 2:
		{
			switch (pos)
			{
			case 1: { if (field[I1 + 1][J1] == '@' || field[I3 + 1][J3] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			case 2: { if (field[I3 + 1][J3] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			case 3: { if (field[I1 + 1][J1] == '@' || field[I2 + 1][J2] == '@' || field[I3 + 1][J3] == '@') BREAK = true; break; }
			case 4: { if (field[I1 + 1][J1] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			}

			break;
		}

		case 3:
		{
			switch (pos)
			{
			case 1: { if (field[I3 + 1][J3] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			case 2: { if (field[I1 + 1][J1] == '@' || field[I2 + 1][J2] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			case 3: { if (field[I1 + 1][J1] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			case 4: { if (field[I1 + 1][J1] == '@' || field[I2 + 1][J2] == '@' || field[I3 + 1][J3] == '@') BREAK = true; break; }
			}

			break;
		}

		case 4:
		{
			switch (pos)
			{
			case 1: { if (field[I3 + 1][J3] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			case 2: { if (field[I1 + 1][J1] == '@' || field[I2 + 1][J2] == '@' || field[I3 + 1][J3] == '@') BREAK = true; break; }
			case 3: { if (field[I1 + 1][J1] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			case 4: { if (field[I1 + 1][J1] == '@' || field[I2 + 1][J2] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			}

			break;
		}

		case 5:
		{
			if (field[I3 + 1][J3] == '@' || field[I4 + 1][J4] == '@') BREAK = true;

			break;
		}

		case 6:
		{
			switch (pos)
			{
			case 1: { if (field[I4 + 1][J4] == '@') BREAK = true; break; }
			case 2: { if (field[I1 + 1][J1] == '@' || field[I2 + 1][J2] == '@' || field[I3 + 1][J3] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			}

			break;
		}

		}
	}
	else
	{
		BREAK = true;
	}

	return BREAK;
}

int CheckLeft(char** field, int I1, int J1, int I2, int J2, int I3, int J3, int I4, int J4, int Rand, int pos, bool& BREAK)
{
	if (J1 > 0 && J2 > 0 && J3 > 0 && J4 > 0)
	{
		switch (Rand)
		{
		case 0:
		{
			switch (pos)
			{
			case 1: { if (field[I1][J1 - 1] == '@' || field[I3][J3 - 1] == '@') BREAK = true; break; }
			case 2: { if (field[I4][J4 - 1] == '@' || field[I3][J3 - 1] == '@' || field[I2][J2 - 1] == '@') BREAK = true; break; }
			}

			break;
		}

		case 1:
		{
			switch (pos)
			{
			case 1: { if (field[I1][J1 - 1] == '@' || field[I3][J3 - 1] == '@') BREAK = true; break; }
			case 2: { if (field[I3][J3 - 1] == '@' || field[I4][J4 - 1] == '@' || field[I1][J1 - 1] == '@') BREAK = true; break; }
			}

			break;
		}

		case 2:
		{
			switch (pos)
			{
			case 1: { if (field[I1][J1 - 1] == '@' || field[I4][J4 - 1] == '@') BREAK = true; break; }
			case 2: { if (field[I1][J1 - 1] == '@' || field[I4][J4 - 1] == '@' || field[I3][J3 - 1] == '@') BREAK = true; break; }
			case 3: { if (field[I3][J3 - 1] == '@' || field[I4][J4 - 1] == '@') BREAK = true; break; }
			case 4: { if (field[I3][J3 - 1] == '@' || field[I2][J2 - 1] == '@' || field[I1][J1 - 1] == '@') BREAK = true; break; }
			}

			break;
		}

		case 3:
		{
			switch (pos)
			{
			case 1: { if (field[I1][J1 - 1] == '@' || field[I3][J3 - 1] == '@' || field[I2][J2 - 1] == '@') BREAK = true; break; }
			case 2: { if (field[I3][J3 - 1] == '@' || field[I4][J4 - 1] == '@') BREAK = true; break; }
			case 3: { if (field[I1][J1 - 1] == '@' || field[I2][J2 - 1] == '@' || field[I4][J4 - 1] == '@') BREAK = true; break; }
			case 4: { if (field[I4][J4 - 1] == '@' || field[I1][J1 - 1] == '@') BREAK = true; break; }
			}

			break;
		}

		case 4:
		{
			switch (pos)
			{
			case 1: { if (field[I1][J1 - 1] == '@' || field[I4][J4 - 1] == '@' || field[I2][J2 - 1] == '@') BREAK = true; break; }
			case 2: { if (field[I3][J3 - 1] == '@' || field[I4][J4 - 1] == '@') BREAK = true; break; }
			case 3: { if (field[I1][J1 - 1] == '@' || field[I2][J2 - 1] == '@' || field[I3][J3 - 1] == '@') BREAK = true; break; }
			case 4: { if (field[I4][J4 - 1] == '@' || field[I1][J1 - 1] == '@') BREAK = true; break; }
			}

			break;
		}

		case 5:
		{
			if (field[I1][J1 - 1] == '@' || field[I3][J3 - 1] == '@')  BREAK = true; break;

		}

		case 6:
		{
			switch (pos)
			{
			case 1: { if (field[I1][J1 - 1] == '@' || field[I2][J2 - 1] == '@' || field[I3][J3 - 1] == '@' || field[I4][J4 - 1] == '@') BREAK = true; break; }
			case 2: { if (field[I1][J1 - 1] == '@') BREAK = true; break; }
			}

			break;
		}

		}
	}
	else
	{
		BREAK = true;
	}

	return BREAK;
}

int CheckRight(char** field, int I1, int J1, int I2, int J2, int I3, int J3, int I4, int J4, int Rand, int pos, bool& BREAK)
{
	if (J1 < 9 && J2 < 9 && J3 < 9 && J4 < 9)
	{
		switch (Rand)
		{
		case 0:
		{
			switch (pos)
			{
			case 1: { if (field[I2][J2 + 1] == '@' || field[I4][J4 + 1] == '@') BREAK = true; break; }
			case 2: { if (field[I1][J1 + 1] == '@' || field[I3][J3 + 1] == '@' || field[I2][J2 + 1] == '@') BREAK = true; break; }
			}

			break;
		}

		case 1:
		{
			switch (pos)
			{
			case 1: { if (field[I2][J2 + 1] == '@' || field[I4][J4 + 1] == '@') BREAK = true; break; }
			case 2: { if (field[I2][J2 + 1] == '@' || field[I4][J4 + 1] == '@' || field[I1][J1 + 1] == '@') BREAK = true; break; }
			}

			break;
		}

		case 2:
		{
			switch (pos)
			{
			case 1: { if (field[I3][J3 + 1] == '@' || field[I4][J4 + 1] == '@') BREAK = true; break; }
			case 2: { if (field[I1][J1 + 1] == '@' || field[I2][J2 + 1] == '@' || field[I3][J3 + 1] == '@') BREAK = true; break; }
			case 3: { if (field[I1][J1 + 1] == '@' || field[I4][J4 + 1] == '@') BREAK = true; break; }
			case 4: { if (field[I3][J3 + 1] == '@' || field[I4][J4 + 1] == '@' || field[I1][J1 + 1] == '@') BREAK = true; break; }
			}

			break;
		}

		case 3:
		{
			switch (pos)
			{
			case 1: { if (field[I1][J1 + 1] == '@' || field[I4][J4 + 1] == '@' || field[I2][J2 + 1] == '@') BREAK = true; break; }
			case 2: { if (field[I1][J1 + 1] == '@' || field[I4][J4 + 1] == '@') BREAK = true; break; }
			case 3: { if (field[I1][J1 + 1] == '@' || field[I2][J2 + 1] == '@' || field[I3][J3 + 1] == '@') BREAK = true; break; }
			case 4: { if (field[I4][J4 + 1] == '@' || field[I3][J3 + 1] == '@') BREAK = true; break; }
			}

			break;
		}

		case 4:
		{
			switch (pos)
			{
			case 1: { if (field[I1][J1 + 1] == '@' || field[I3][J3 + 1] == '@' || field[I2][J2 + 1] == '@') BREAK = true; break; }
			case 2: { if (field[I1][J1 + 1] == '@' || field[I4][J4 + 1] == '@') BREAK = true; break; }
			case 3: { if (field[I1][J1 + 1] == '@' || field[I2][J2 + 1] == '@' || field[I4][J4 + 1] == '@') BREAK = true; break; }
			case 4: { if (field[I4][J4 + 1] == '@' || field[I3][J3 + 1] == '@') BREAK = true; break; }
			}

			break;
		}

		case 5:
		{
			if (field[I2][J2 + 1] == '@' || field[I4][J4 + 1] == '@')  BREAK = true; break;
		}

		case 6:
		{
			switch (pos)
			{
			case 1: { if (field[I1][J1 + 1] == '@' || field[I2][J2 + 1] == '@' || field[I3][J3 + 1] == '@' || field[I4][J4 + 1] == '@') BREAK = true; break; }
			case 2: { if (field[I4][J4 + 1] == '@') BREAK = true; break; }
			}

			break;
		}

		}
	}
	else
	{
		BREAK = true;
	}

	return BREAK;
}

int WASDE(char** field, int& I1, int& J1, int& I2, int& J2, int& I3, int& J3, int& I4, int& J4, int sleep, int& Rand, int& pos, int& swap, bool& NoSleep, bool& GameOver, int** ColoursData, int level, int points, bool& Escape)
{
	char WASDE = ' ';
	while (true)
	{
		if (Escape == true) break;

		if (_kbhit())
		{
			WASDE = _getch();

			if (WASDE == 27)
			{
				system("cls");
				system("color B4");
				Sleep(100);
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tÕ Î Ò È Ò Å   Â Û É Ò È   È Ç   È Ã Ð Û ?\n\n\n\n";
				Sleep(100);
				cout << "\t\t\t\t\t\t    Å ñ ë è   Ä À ,  í à æ ì è ò å   E N T E R\t\tÅ ñ ë è   Í Å Ò ,  í à æ ì è ò å   E S C\n";

				char choice = ' ';
				while (choice != 13 && choice != 27)
				{
					choice = _getch();
				}

				if (choice == 27)
				{
					system("cls");
					system("color F1");
					Print(field, ColoursData, level, points);
				}

				if (choice == 13)
				{
					Escape = true;
					system("cls");
					break;
				}
			}

			if (WASDE == 'w' && I1 < 2 && swap == 1 || WASDE == 'W' && I1 < 2 && swap == 1 || WASDE == 'ö' && I1 < 2 && swap == 1 || WASDE == 'Ö' && I1 < 2 && swap == 1 || WASDE == 'w' && I2 < 2 && swap == 1 || WASDE == 'W' && I2 < 2 && swap == 1 || WASDE == 'ö' && I2 < 2 && swap == 1 || WASDE == 'Ö' && I2 < 2 && swap == 1 || WASDE == 'w' && I3 < 2 && swap == 1 || WASDE == 'W' && I3 < 2 && swap == 1 || WASDE == 'ö' && I3 < 2 && swap == 1 || WASDE == 'Ö' && I3 < 2 && swap == 1 || WASDE == 'w' && I4 < 2 && swap == 1 || WASDE == 'W' && I4 < 2 && swap == 1 || WASDE == 'ö' && I4 < 2 && swap == 1 || WASDE == 'Ö' && I4 < 2 && swap == 1)
			{
				field[I1][J1] = '*';
				field[I2][J2] = '*';
				field[I3][J3] = '*';
				field[I4][J4] = '*';

				ColoursData[I1][J1] = 1;
				ColoursData[I2][J2] = 1;
				ColoursData[I3][J3] = 1;
				ColoursData[I4][J4] = 1;

				Rand = rand() % 7;
				pos = 1;

				Figure(field, I1, J1, I2, J2, I3, J3, I4, J4, Rand, GameOver, ColoursData, level, points);
				system("cls");
				Print(field, ColoursData, level, points);

				--swap;
			}

			if (WASDE == 'a' || WASDE == 'A' || WASDE == 'ô' || WASDE == 'Ô')
			{
				bool BREAK{ false };
				CheckLeft(field, I1, J1, I2, J2, I3, J3, I4, J4, Rand, pos, BREAK);
				if (BREAK == false)
				{
					Left(field, I1, J1, I2, J2, I3, J3, I4, J4, Rand, ColoursData, level, points);
				}
			}

			if (WASDE == 's' || WASDE == 'S' || WASDE == 'û' || WASDE == 'Û')
			{
				NoSleep = true;
			}

			if (WASDE == 'd' || WASDE == 'D' || WASDE == 'â' || WASDE == 'Â')
			{
				bool BREAK{ false };
				CheckRight(field, I1, J1, I2, J2, I3, J3, I4, J4, Rand, pos, BREAK);
				if (BREAK == false)
				{
					Right(field, I1, J1, I2, J2, I3, J3, I4, J4, Rand, ColoursData, level, points);
				}
			}

			if (WASDE == 'e' || WASDE == 'E' || WASDE == 'ó' || WASDE == 'Ó')
			{
				switch (Rand)
				{
				case 5: break;

				case 0:
				{
					switch (pos)
					{
					case 1:
					{
						if (field[I2 + 2][J2 - 1] == '*' && field[I3 - 1][J3] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							I1 += 1;
							I2 += 2;
							J2 -= 1;
							I3 -= 1;
							J4 -= 1;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							++pos;
						}

						break;
					}

					case 2:
					{
						if (field[I1 - 1][J1] == '*' && field[I2 - 2][J2 + 1] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							I1 -= 1;
							I2 -= 2;
							J2 += 1;
							I3 += 1;
							J4 += 1;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							--pos;
						}

						break;
					}

					}

					break;
				}

				case 1:
				{
					switch (pos)
					{
					case 1:
					{
						if (field[I3][J3 - 1] == '*' && field[I4 + 1][J4 - 2] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							J1 += 1;
							I2 += 1;
							J3 -= 1;
							I4 += 1;
							J4 -= 2;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							++pos;
						}

						break;
					}

					case 2:
					{
						if (field[I1][J1 - 1] == '*' && field[I4 - 1][J4 + 2] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							J1 -= 1;
							I2 -= 1;
							J3 += 1;
							I4 -= 1;
							J4 += 2;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							--pos;
						}

						break;
					}

					}

					break;
				}

				case 2:
				{
					switch (pos)
					{
					case 1:
					{
						if (field[I3 + 2][J3 - 1] == '*' && field[I4][J4 - 1] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							J1 += 1;
							I2 += 1;
							I3 += 2;
							J3 -= 1;
							J4 -= 1;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							++pos;
						}

						break;
					}

					case 2:
					{
						if (field[I1 + 1][J1 + 1] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							I1 += 1;
							J1 += 1;
							I3 -= 1;
							J3 -= 1;
							I4 -= 1;
							J4 += 1;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							++pos;
						}

						break;
					}

					case 3:
					{
						if (field[I1 + 1][J1 - 1] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							I1 += 1;
							J1 -= 1;
							I3 -= 1;
							J3 += 1;
							I4 += 1;
							J4 += 1;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							++pos;
						}

						break;
					}

					case 4:
					{
						if (field[I1 - 2][J1 - 1] == '*' && field[I3][J3 + 1] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							I1 -= 2;
							J1 -= 1;
							I2 -= 1;
							J3 += 1;
							J4 -= 1;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							pos = 1;
						}

						break;
					}

					}

					break;
				}

				case 3:
				{
					switch (pos)
					{
					case 1:
					{
						if (field[I1 + 1][J1 + 1] == '*' && field[I3 - 1][J3 - 1] == '*' && field[I4][J4 - 2] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							I1 += 1;
							J1 += 1;
							I3 -= 1;
							J3 -= 1;
							J4 -= 2;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							++pos;
						}

						break;
					}

					case 2:
					{
						if (field[I1 + 1][J1 - 1] == '*' && field[I3 - 1][J3 + 1] == '*' && field[I4 - 2][J4] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							I1 += 1;
							J1 -= 1;
							I3 -= 1;
							J3 += 1;
							I4 -= 2;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							++pos;
						}

						break;
					}

					case 3:
					{
						if (field[I1 - 1][J1 - 1] == '*' && field[I3 + 1][J3 + 1] == '*' && field[I4][J4 + 2] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							I1 -= 1;
							J1 -= 1;
							I3 += 1;
							J3 += 1;
							J4 += 2;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							++pos;
						}

						break;
					}

					case 4:
					{
						if (field[I1 - 1][J1 + 1] == '*' && field[I3 + 1][J3 - 1] == '*' && field[I4 + 2][J4] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							I1 -= 1;
							J1 += 1;
							I3 += 1;
							J3 -= 1;
							I4 += 2;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							pos = 1;
						}

						break;
					}

					}

					break;
				}

				case 4:
				{
					switch (pos)
					{
					case 1:
					{
						if (field[I1 + 1][J1 + 1] == '*' && field[I3 - 1][J3 - 1] == '*' && field[I4 - 2][J4] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							I1 += 1;
							J1 += 1;
							I3 -= 1;
							J3 -= 1;
							I4 -= 2;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							++pos;
						}

						break;
					}

					case 2:
					{
						if (field[I1 + 1][J1 - 1] == '*' && field[I3 - 1][J3 + 1] == '*' && field[I4][J4 + 2] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							I1 += 1;
							J1 -= 1;
							I3 -= 1;
							J3 += 1;
							J4 += 2;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							++pos;
						}

						break;
					}

					case 3:
					{
						if (field[I1 - 1][J1 - 1] == '*' && field[I3 + 1][J3 + 1] == '*' && field[I4 + 2][J4] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							I1 -= 1;
							J1 -= 1;
							I3 += 1;
							J3 += 1;
							I4 += 2;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							++pos;
						}

						break;
					}

					case 4:
					{
						if (field[I1 - 1][J1 + 1] == '*' && field[I3 + 1][J3 - 1] == '*' && field[I4][J4 - 2] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							I1 -= 1;
							J1 += 1;
							I3 += 1;
							J3 -= 1;
							J4 -= 2;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							pos = 1;
						}

						break;
					}

					}

					break;
				}

				case 6:
				{
					switch (pos)
					{
					case 1:
					{
						if (field[I1 + 1][J1 - 1] == '*' && field[I3 - 1][J3 + 1] == '*' && field[I4 - 2][J4 + 2] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							I1 += 1;
							J1 -= 1;
							I3 -= 1;
							J3 += 1;
							I4 -= 2;
							J4 += 2;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							++pos;
						}

						break;
					}

					case 2:
					{
						if (field[I1 - 1][J1 + 1] == '*' && field[I3 + 1][J3 - 1] == '*' && field[I4 + 2][J4 - 2] == '*')
						{
							field[I1][J1] = '*';
							field[I2][J2] = '*';
							field[I3][J3] = '*';
							field[I4][J4] = '*';

							ColoursData[I1][J1] = 1;
							ColoursData[I2][J2] = 1;
							ColoursData[I3][J3] = 1;
							ColoursData[I4][J4] = 1;

							I1 -= 1;
							J1 += 1;
							I3 += 1;
							J3 -= 1;
							I4 += 2;
							J4 -= 2;

							field[I1][J1] = '@';
							field[I2][J2] = '@';
							field[I3][J3] = '@';
							field[I4][J4] = '@';

							Colour(ColoursData, Rand, I1, J1, I2, J2, I3, J3, I4, J4);

							system("cls");
							Print(field, ColoursData, level, points);

							--pos;
						}

						break;
					}

					}

					break;
				}

				}
			}
		}

		if (NoSleep == false)
		{
			Sleep(sleep);
		}

		break;
	}

	return I1, J1, I2, J2, I3, J3, I4, J4, Rand, pos, swap, NoSleep, GameOver, Escape;
}

int StringsBurning(char** field, int& sleep, int& points, int& levelpoints, int& level, int& BurnedStrings, int** ColoursData)
{
	for (int i = 0; i < 20; i++)
	{
		bool BurnString{ true };
		for (int j = 0; j < 10; j++)
		{
			if (field[i][j] == '*')
			{
				BurnString = false;
				break;
			}
		}

		if (BurnString == true)
		{
			for (int k = 0; k < 10; k++)
			{
				for (int l = i; l > 0; l--)
				{
					field[l][k] = field[l - 1][k];
					ColoursData[l][k] = ColoursData[l - 1][k];
				}
				field[0][k] = '*';
				ColoursData[0][k] = 1;

				Sleep(10);
				system("cls");
				Print(field, ColoursData, level, points);
			}

			BurnedStrings += 1;
			points += levelpoints;
			levelpoints += 10;
			// % 3
			if (BurnedStrings % 1 == 0)
			{
				level += 1;

				if (sleep > 10) sleep -= 10;
			}
		}
	}
