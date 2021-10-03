#include<iostream>
#include<Windows.h>

using namespace std;

struct Car
{
	char Color[15];
	char Model[15];
	int Number;
};

int main()
{
	system("chcp 1251"); system("cls");
	int N{ 2 };
	Car* Cars = new Car[N];

	for (int i = 0; i < N; i++)
	{
		cout << "Введите цвет машины N" << i + 1 << ": "; cin >> Cars[i].Color;
		cout << "Введите модель машины  N" << i + 1 << ": "; cin >> Cars[i].Model;
		cout << "Введите номер машины N" << i + 1 << ": "; cin >> Cars[i].Number;
		Sleep(2500);
		system("cls");
	}
	while (1)
	{
		cout << "|1|   Р е д а к т и р о в а т ь   м а ш и н у " << endl << endl;
		cout << "|2|         П е ч а т ь   м а ш и н " << endl << endl;
		cout << "|3|      П о и с к    п о    н о м е р у  \n\n\n\n\n";

		cout << "Выберите действие: "; 		int a; cin >> a; 		
		Sleep(2500); system("cls");
		switch (a)
		{
		case 1:
		{
			int CarNumb; cout << "Введите номер машины для редактирования: "; cin >> CarNumb; CarNumb -= 1;
			cout << "|1| Цвет: " << Cars[CarNumb].Color << endl;;
			cout << "|2| Модель: " << Cars[CarNumb].Model << endl;;
			cout << "|3| Номер: " << Cars[CarNumb].Number << endl;

			cout << "Введите пункт для редактирования: "; cin >> a;
			switch (a)
			{
			case 1: {cout << "Введите новый цвет машины: "; cin >> Cars[CarNumb].Color; break; }
			case 2: {cout << "Введите новую модель машины: "; cin >> Cars[CarNumb].Model; break; }
			case 3: {cout << "Введите новый номер машины: "; cin >> Cars[CarNumb].Number; break; }
			}

			Sleep(2500); system("cls"); break;
		}
		case 2:
		{
			for (int i = 0; i < N; i++)
			{
				cout << "Машина N" << i + 1 << endl;
				cout << "Цвет:" << Cars[i].Color << endl;
				cout << "Модель:" << Cars[i].Model<< endl;
				cout << "Номер:" << Cars[i].Number << "\n\n\n";
			}
			Sleep(2500); system("cls"); break;
		}
		case 3:
		{
			int Numb;
			cout << "Введите номер машины для поиска: ";
			cin >> Numb;
			for (int i = 0; i < N; i++)
				if (Numb == Cars[i].Number)
				{
					cout << "Машина N" << i + 1 << endl;
					cout << "Цвет:" << Cars[i].Color << endl;
					cout << "Модель:" << Cars[i].Model << endl;
					cout << "Номер:" << Cars[i].Number << "\n\n\n";
				}
			Sleep(2500); system("cls"); break;
		}
		default:
		{
			cout << "Неправильное число!";
			Sleep(2500); system("cls"); break;
		}
		}
	}





	return 0;
}
