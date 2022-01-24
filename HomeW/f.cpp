#define _CRT_SECURE_NO_WARNINGS
#include<iostream>//istream ostream
#include<fstream>
#include<Windows.h>
#include<string.h>
using namespace std;
void RussianMessage(const char* message)
{
	char rmessage[256];
	CharToOemA(message, rmessage);
	cout << rmessage;
}
int RussianMenu()
{
	RussianMessage("\nВведите  1 для добавления новой структуры в файл\n");
	RussianMessage("\nВведите 2 для показа всех структур из файла\n");
	RussianMessage("\nВведите 3 для выхода\n");
	int choice;
	cin >> choice;
	return choice;
}
class Man
{
	int age;
	char* name;
	char* surname;
public:
	Man()
	{
		name = 0;
		surname = 0;
		age = 0;
	}
	Man(const char* n, const char* s, int a)
	{
		name = new char[strlen(n) + 1];
		if (!name)
		{
			RussianMessage("Ошибка при выделение памяти !!!");
			exit(1);
		}
		strcpy(name, n);
		surname = new char[strlen(s) + 1];
		if (!surname)
		{
			RussianMessage("Ошибка при выделение памяти !!!");
			exit(1);
		}
		strcpy(surname, s);
		age = a;
	}

	~Man()
	{
		delete[] name;
		delete[] surname;
	}
	void Put()
	{
		char temp[1024];
		RussianMessage("\nВведите имя:\n");
		cin >> temp;
		if (name)
			delete[] name;
		name = new char[strlen(temp) + 1];
		if (!name)
		{
			RussianMessage("Ошибка при выделение памяти !!!");
			exit(1);
		}
		strcpy(name, temp);
		RussianMessage("\nВведите фамилию:\n");
		cin >> temp;
		if (surname)
			delete[] surname;
		surname = new char[strlen(temp) + 1];
		if (!surname)
		{
			RussianMessage("Ошибка при выделение памяти !!!");
			exit(1);
		}
		strcpy(surname, temp);
		RussianMessage("\nВведите возраст\n");
		cin >> age;

	}

	void Show()
	{
		RussianMessage("\nИмя\n");
		cout << name;
		RussianMessage("\nФамилия\n");
		cout << surname;
		RussianMessage("\nВозраст\n");
		cout << age << endl;
	}
	void SaveToFile()
	{
		int size;
		ofstream f("Men.txt", ios::out | ios::binary | ios::app);
		if (!f) {
			RussianMessage("Файл не открылся для записи!!!");
			exit(1);
		}
		f << name;
		f << surname;
		f << age;
		f.close();		
	}
	void static ShowFromFile()
	{
		ifstream f("Men.txt", ios::out | ios::binary);
		if (!f) {
			RussianMessage("Файл не открылся для записи!!!");
			exit(1);
		}
		char buff[50];
		int a;
		while(f)
		{
			f >> buff;
			RussianMessage("\nИмя\n");
			cout << buff;
			f >> buff;
			RussianMessage("\nФамилия\n");
			cout << buff;
			RussianMessage("\nВозраст\n");
			f >> a;
			cout << a << endl;
		}
		
	
	}
};
void main()
{
	Man* a;
	do
	{
		switch (RussianMenu()) {
		case 1:
			a = new Man;
			a->Put();
			a->SaveToFile();
			delete a;
			break;
		case 2:
			//a = new Man;
			Man::ShowFromFile();
			//delete a;
			break;
		case 3:
			RussianMessage("До свидания\n");
			return;
		default:
			RussianMessage("Неверный ввод\n");
		}
	} while (1);
}
