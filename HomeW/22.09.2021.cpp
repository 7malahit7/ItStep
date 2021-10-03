#include<iostream>
#include<Windows.h>

using namespace std;

struct Student
{
	char Name[20];
	int Group;
	float Ses;

};


int main()
{
	system("chcp 1251"); system("cls");
	int N{ 3 };

	Student* Stud1 = new Student[N];

	for (int i = 0; i < N; i++)
	{
		cout << "Введите имя студента: "; cin >> Stud1[i].Name;
		cout << "Введите группу: "; cin >> Stud1[i].Group ;
		cout << "Введите средний балл студента: "; cin >> Stud1[i].Ses;
		Sleep(2500);
		system("cls");
	}


	bool a = 0;
	cout << "Студенты с средним баллом выше 4.0:  \n\n\n\n";
	for (int i = 0; i < N; i++)
	{
		if (Stud1[i].Ses >= 4) 
		{
			cout << "Имя: "<<Stud1[i].Name << endl;
			cout << "Группа: "<<Stud1[i].Group << endl;
			cout << "Средний балл: "<< Stud1[i].Ses << endl;
			a = 1;
		}
	}
	if (a == 0)
		cout << "Студенты с баллом выше 4.0 отстутсвуют.\n\n\n\n\n";


	return 0;
}
