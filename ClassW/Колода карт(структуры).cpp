#include<iostream>
#include<Windows.h>


using namespace std;


struct Deck
{
	char suit[15];
	int numb;
};

int main()
{

	system("chcp 1251");
	system("cls");
	char spades[15] = "spades";
	char hearts[15] = "hearts";
	char diamonds[15] = "diamonds";
	char clubs[15] = "clubs";

    const int N = 36;
	Deck Card[N];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 6; j < 14; j++)
		{

		}
	}

	


	for (int i = 0; i < 36; i++)
		cout << Card[i].numb << endl;


	return 0;
}
