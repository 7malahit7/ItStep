#include<iostream>
#include<Windows.h>


using namespace std;


//struct Date
//{
//	int year;
//	int month;
//	int day;
//};
//
//struct Person
//{
//	char name[25];
//	char surname[50];
//	char patronymic[30];
//	Date Birthday;
//};


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
	//const int N = 5;
	//Person people[N];
	//for (int i = 0; i < N; i++) {
	//	cout << "~~~~~~~~~~Person N"<< i+1 << "~~~~~~~~~~\n";
	//	cout << "Input name "; cin >> people[i].name;
	//	cout << "Input surname: "; cin >> people[i].surname;
	//	cout << "Input patronomic: "; cin >> people[i].patronymic;
	//	cout << "~~~Date~~~\n";
	//	cout << "Input day "; cin >> people[i].Birthday.day;
	//	cout << "Input month: "; cin >> people[i].Birthday.month;
	//	cout << "Input year: "; cin >> people[i].Birthday.year;
	//	Sleep(2500);
	//	system("cls");

	//}

	//system("cls");

	//for (int i = 0; i < N; i++)
	//{
	//	cout << "~~~~~~~~~~Person N" << i + 1 << "~~~~~~~~~~\n";
	//	cout << "\nDay: " << people[i].Birthday.day << endl;
	//	cout << "Month: " << people[i].Birthday.month << endl;
	//	cout << "Year: " << people[i].Birthday.year << endl << endl;
	//	cout << "Name: " << people[i].name << endl;
	//	cout << "Surname: " << people[i].surname << endl;
	//	cout << "Patronomic: " << people[i].patronymic << endl;
	//	Sleep(2500);
	//	system("cls");
	//}
    const int N = 36;
	Deck Card[N];

	for (int i = 1; i < N+1; i++)
	{
		Card[i].numb = i;
	}

	


	for (int i = 0; i < 36; i++)
		cout << Card[i].numb << endl;


	return 0;
}