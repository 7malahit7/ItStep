#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

//for (int i = 0; i < 4; i++)
//{
//	for (int j = 0; j < 6; j++)
//	{
//		if (field[i][j] == '@' && prog == 1)
//		{
//			I = i; prog += 1; jj = j; ii = i;
//		}
//		if (field[i][j] == '@' && prog == 2 && jj != j || field[i][j] == '@' && prog == 2 && ii != i)
//		{
//			J = i; prog += 1; jj = j; ii = i;
//		}
//		if (field[i][j] == '@' && prog == 3 && jj != j || field[i][j] == '@' && prog == 3 && ii != i)
//		{
//			L = i; prog += 1; jj = j; ii = i;
//		}
//		if (field[i][j] == '@' && prog == 4 && jj != j || field[i][j] == '@' && prog == 4 && ii != i)
//		{
//			K = i; prog += 1;
//		}
//	}
//	if (prog == 5) break;
//}


void Init(char** field)
{
	for (int i = 0; i < 20; i++)
	{
		field[i] = new char[10];
	}
}

void Fill(char** field)
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			field[i][j] = '*';
		}
	}
}

void Print(char** field)
{
	cout << "\n\n\n\n\n\n\n";
	for (int i = 0; i < 20; i++)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t";
		for (int j = 0; j < 10; j++)
		{
			cout << field[i][j] << "   ";
		}
		cout << endl << endl;
	}
	cout << "\n\n\n\n\n\n\n";
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

int Figure(char** field, int& I1, int& J1, int& I2, int& J2, int& I3, int& J3, int& I4, int& J4, int& Rand, bool& GameOver)
{
	switch (Rand)
	{
	case 0:
	{
		I1 = 0; J1 = 4;
		I2 = 0; J2 = 5;
		I3 = 1; J3 = 3;
		I4 = 1; J4 = 4;

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

		if (field[I1][J1] == '@' || field[I2][J2] == '@' || field[I3][J3] == '@' || field[I4][J4] == '@') GameOver = true;

		I(field);

		break;
	}

	}

	return I1, J1, I2, J2, I3, J3, I4, J4, Rand, GameOver;
}

int Left(char** field, int& I1, int& J1, int& I2, int& J2, int& I3, int& J3, int& I4, int& J4)
{
	field[I1][J1] = '*';
	field[I2][J2] = '*';
	field[I3][J3] = '*';
	field[I4][J4] = '*';

	--J1; --J2; --J3; --J4;

	field[I1][J1] = '@';
	field[I2][J2] = '@';
	field[I3][J3] = '@';
	field[I4][J4] = '@';

	system("cls");
	Print(field);

	return I1, J1, I2, J2, I3, J3, I4, J4;
}

int Down(char** field, int& I1, int& J1, int& I2, int& J2, int& I3, int& J3, int& I4, int& J4)
{
	field[I1][J1] = '*';
	field[I2][J2] = '*';
	field[I3][J3] = '*';
	field[I4][J4] = '*';

	++I1; ++I2; ++I3; ++I4;

	field[I1][J1] = '@';
	field[I2][J2] = '@';
	field[I3][J3] = '@';
	field[I4][J4] = '@';

	system("cls");
	Print(field);

	return I1, J1, I2, J2, I3, J3, I4, J4;
}

int Right(char** field, int& I1, int& J1, int& I2, int& J2, int& I3, int& J3, int& I4, int& J4)
{
	field[I1][J1] = '*';
	field[I2][J2] = '*';
	field[I3][J3] = '*';
	field[I4][J4] = '*';

	++J1; ++J2; ++J3; ++J4;

	field[I1][J1] = '@';
	field[I2][J2] = '@';
	field[I3][J3] = '@';
	field[I4][J4] = '@';

	system("cls");
	Print(field);

	return I1, J1, I2, J2, I3, J3, I4, J4;
}

int WASDE(char** field, int& I1, int& J1, int& I2, int& J2, int& I3, int& J3, int& I4, int& J4, int& slp, int& Rand, int& pos, int& swap, bool& GameOver)
{
	slp = 0;
	char WASDE = ' ';
	if (_kbhit())
	{
		WASDE = _getch();

		if (WASDE == 'w' && I1 < 2 && swap == 1 || WASDE == 'W' && I1 < 2 && swap == 1 || WASDE == 'ö' && I1 < 2 && swap == 1 || WASDE == 'Ö' && I1 < 2 && swap == 1)
		{
			field[I1][J1] = '*';
			field[I2][J2] = '*';
			field[I3][J3] = '*';
			field[I4][J4] = '*';

			Rand = rand() % 7;

			Figure(field, I1, J1, I2, J2, I3, J3, I4, J4, Rand, GameOver);
			system("cls");
			Print(field);

			--swap;
		}

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
			slp = 99;
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
					field[I1][J1] = '*';
					field[I2][J2] = '*';
					field[I3][J3] = '*';
					field[I4][J4] = '*';

					I1 = 1; J1 = 4;
					I2 = 2; J2 = 4;
					I3 = 0; J3 = 3;
					I4 = 1; J4 = 3;

					field[I1][J1] = '@';
					field[I2][J2] = '@';
					field[I3][J3] = '@';
					field[I4][J4] = '@';

					system("cls");
					Print(field);

					++pos;

					break;
				}

				case 2:
				{
					field[I1][J1] = '*';
					field[I2][J2] = '*';
					field[I3][J3] = '*';
					field[I4][J4] = '*';

					I1 = 0; J1 = 4;
					I2 = 0; J2 = 5;
					I3 = 1; J3 = 3;
					I4 = 1; J4 = 4;

					field[I1][J1] = '@';
					field[I2][J2] = '@';
					field[I3][J3] = '@';
					field[I4][J4] = '@';

					system("cls");
					Print(field);

					--pos;

					break;
				}

				}
			}

			case 1:
			{
				switch (pos)
				{
				case 1:
				{
					field[I1][J1] = '*';
					field[I2][J2] = '*';
					field[I3][J3] = '*';
					field[I4][J4] = '*';

					I1 = 0; J1 = 5;
					I2 = 1; J2 = 5;
					I3 = 1; J3 = 4;
					I4 = 2; J4 = 4;

					field[I1][J1] = '@';
					field[I2][J2] = '@';
					field[I3][J3] = '@';
					field[I4][J4] = '@';

					system("cls");
					Print(field);

					++pos;

					break;
				}

				case 2:
				{
					field[I1][J1] = '*';
					field[I2][J2] = '*';
					field[I3][J3] = '*';
					field[I4][J4] = '*';

					I1 = 0; J1 = 3;
					I2 = 0; J2 = 4;
					I3 = 1; J3 = 4;
					I4 = 1; J4 = 5;

					field[I1][J1] = '@';
					field[I2][J2] = '@';
					field[I3][J3] = '@';
					field[I4][J4] = '@';

					system("cls");
					Print(field);

					--pos;

					break;
				}

				}
			}

			case 2:
			{
				switch (pos)
				{
				case 1:
				{
					field[I1][J1] = '*';
					field[I2][J2] = '*';
					field[I3][J3] = '*';
					field[I4][J4] = '*';

					I1 = 0; J1 = 5;
					I2 = 1; J2 = 5;
					I3 = 2; J3 = 5;
					I4 = 1; J4 = 4;

					field[I1][J1] = '@';
					field[I2][J2] = '@';
					field[I3][J3] = '@';
					field[I4][J4] = '@';

					system("cls");
					Print(field);

					++pos;

					break;
				}

				}
			}



			}
		}
	}

	return I1, J1, I2, J2, I3, J3, I4, J4, slp, pos, swap;
}

int Check(char** field, int I1, int J1, int I2, int J2, int I3, int J3, int I4, int J4, int Rand, int pos, bool& BREAK)
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
			case 2: { if (field[I4 + 1][J4] == '@' || field[I2 + 1][J2] == '@') BREAK = true; break; }
			}
		}

		case 1:
		{
			switch (pos)
			{
			case 1: { if (field[I1 + 1][J1] == '@' || field[I3 + 1][J3] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			case 2: { if (field[I2 + 1][J2] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			}
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
		}

		case 5:
		{
			if (field[I3 + 1][J3] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break;
		}

		case 6:
		{
			switch (pos)
			{
			case 1: { if (field[I4 + 1][J4] == '@') BREAK = true; break; }
			case 2: { if (field[I1 + 1][J1] == '@' || field[I2 + 1][J2] == '@' || field[I3 + 1][J3] == '@' || field[I4 + 1][J4] == '@') BREAK = true; break; }
			}
		}

		}
	}

	return BREAK;
}
