#include<iostream>
#include<Windows.h>


using namespace std;


struct Date
{
	int year;
	int month;
	int day;
};

struct Person
{
	char name[25];
	char surname[50];
	char patronymic[30];
	Date Birthday;
};




int main()
{
	system("chcp 1251"); // русский язык
	system("cls");
	const int N = 5;
	Person people[N];
	for (int i = 0; i < N; i++) {
		cout << "~~~~~~~~~~Person N"<< i+1 << "~~~~~~~~~~\n";
		cout << "Input name "; cin >> people[i].name;
		cout << "Input surname: "; cin >> people[i].surname;
		cout << "Input patronomic: "; cin >> people[i].patronymic;
		cout << "~~~Date~~~\n";
		cout << "Input day "; cin >> people[i].Birthday.day;
		cout << "Input month: "; cin >> people[i].Birthday.month;
		cout << "Input year: "; cin >> people[i].Birthday.year;
		Sleep(2500);
		system("cls");

	}

	system("cls");

	for (int i = 0; i < N; i++)
	{
		cout << "~~~~~~~~~~Person N" << i + 1 << "~~~~~~~~~~\n";
		cout << "\nDay: " << people[i].Birthday.day << endl;
		cout << "Month: " << people[i].Birthday.month << endl;
		cout << "Year: " << people[i].Birthday.year << endl << endl;
		cout << "Name: " << people[i].name << endl;
		cout << "Surname: " << people[i].surname << endl;
		cout << "Patronomic: " << people[i].patronymic << endl;
		Sleep(2500);
		system("cls");
	}


	


	return 0;
}
