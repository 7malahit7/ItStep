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
		OneFunction(field);
		Print(field);
		
		//char move = 'o';
		int I{ -1 }, J{ -1 }, L{ -1 }, K{ -1 }, prog{ 1 };
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				int jj = j;
				if (field[i][j] == '@' && prog == 1)
				{
					I = i; prog += 1;
				}
				if (field[i][j] == '@' && prog == 2 && I != 0)
				{
					J = i; prog += 1;
				}
				if (field[i][j] == '@' && prog == 3 && I != 0 && J != 0 && J != 1)
				{
					L = i; prog += 1;
				}
				if (field[i][j] == '@' && prog == 4 && I != 0 && J != 0 && J != 1 && L != 0 && L != 1 && L != 2)
				{
					K = i; prog += 1;
				}
			}
			if (prog == 5) break;
		}
		cout << "\n\n" << I << "  " << J << "  " << L << "  " << K;
		/*while (I != 20 && J != 20 && L != 20 && K != 20)
		{

		
			++I; ++J; ++L; ++K;
		}*/







		break;
	}

	return 0;
}
