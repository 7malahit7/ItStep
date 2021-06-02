#include <iostream>
#include <time.h>
#include <string>
#include <windows.h>

using namespace std;

void O(char** field)
{

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5 && i == 0)
			{
				field[i][j] = '@';
			}
			if (j == 6 && i == 0)
			{
				field[i][j] = '@';
			}
			if (j == 5 && i == 1)
			{
				field[i][j] = '@';
			}
			if (j == 6 && i == 1)
			{
				field[i][j] = '@';
			}

		}
	}

}
void I(char** field)
{

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5 && i == 0)
			{
				field[i][j] = '@';
			}
			if (j == 6 && i == 0)
			{
				field[i][j] = '@';
			}
			if (j == 7 && i == 0)
			{
				field[i][j] = '@';
			}
			if (j == 8 && i == 0)
			{
				field[i][j] = '@';
			}

		}
	}

}

void PrintField(char** field, int N, int M)
{
	cout << endl << endl << endl << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "\t\t";
		for (int j = 0; j < M; j++)
		{
			cout << field[i][j] << "  ";
		}
		cout << endl;
	}
}
void FillField(char** field, int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			field[i][j] = '·';
		}
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));


	
	int N{ 20 };
	int M{ 10 };


	char** field = new char* [N];
	for (int i = 0; i < N; i++)
	{
		field[i] = new char[M];

	}

	FillField(field, N, M);
	PrintField(field, N, M);


	I(field);


	PrintField(field, N, M);

	
	return 0;
}