#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>

using namespace std;


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
	for (int i = 0; i < 20; i++) {
		{
			cout << "\t\t\t\t\t";
			for (int j = 0; j < 10; j++)
			{
				cout << field[i][j] << "   ";
			}
			cout << endl << endl;
		}
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

int Figure(char** field, int &I1, int &J1, int &I2, int &J2, int &I3, int &J3, int &I4, int &J4, bool &GameOver)
{
	int Rand = rand() % 7;

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

	return I1, J1, I2, J2, I3, J3, I4, J4, GameOver;
}

