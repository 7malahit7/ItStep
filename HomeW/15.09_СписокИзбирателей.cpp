#include<iostream>
#include<Windows.h>

using namespace std;

struct Month
{
	int MonNum;
	int DayAm;
};
struct Date
{
	int year;
	int Month;
	int day;
};

struct Person
{
	char name[25];
	char surname[50];
	char patronymic[30];
	Date Birthday;
	bool accepted;
};
struct CurDate
{
	int year;
	int month;
	int day;
};



int main()
{
	system("chcp 1251"); // ������� ����
	system("cls");
	const int N = 3; // ����� �����������
	int n{ 3 }; // ����� ��������� �����������
	
	Month *month = new Month[13]; 
	month[1] = { 1, 31 };
	month[3] = { 3, 31 };
	month[4] = { 4, 30 };
	month[5] = { 5, 31 };
	month[6] = { 6, 30 };
	month[7] = { 7, 31 };
	month[8] = { 8, 31 };
	month[9] = { 9, 30 };
	month[10] = { 10, 31 };
	month[11] = { 11, 30 };
	month[12] = { 12, 31 };




	Person* people = new Person[N];
	CurDate cd;
	cout << "\n\n\n\n\n";
	cout << "\t\t\t\t������� ������� ���: "; cin >> cd.year; 
	
	if (cd.year % 4 == 0 || cd.year % 100 == 0 && cd.year % 400) // �������� �� ���������� ���
		month[2] = { 2, 29 };
	else
		month[2] = { 2, 28 };



	cout << "\t\t\t\t������� ������� ����� ������: ";do {cin >> cd.month; if (cd.month > 12) cout << "\n����� ������ �������, ��������� ������� �����:  ";
	} while (cd.month > 12);
	cout << "\t\t\t\t������� ������� ����: ";do{ cin >> cd.day; if (cd.day > month[cd.month].DayAm) cout << "\n���� ������ �������, ��������� ������� �����:  ";
	} while (cd.day > month[cd.month].DayAm);
	Sleep(2500);
	system("cls");

	for (int i = 0; i < N; i++) {
		cout << "\n\n\n\n\n";
		cout << "\t\t\t\t~~~~~~~~~~������� N" << i + 1 << "~~~~~~~~~~\n";
		cout << "\t\t\t\t������� ��� "; cin >> people[i].name;
		cout << "\t\t\t\t������� �������: "; cin >> people[i].surname;
		cout << "\t\t\t\t������� ��������: "; cin >> people[i].patronymic;
		cout << "\t\t\t\t\t~~~���� ��������~~~\n";
		cout << "\t\t\t\t������� ���: "; do { cin >> people[i].Birthday.year; 
		if (people[i].Birthday.year > cd.year) cout << "\n��� ������ �������, ��������� ������� �����:  "; } while (people[i].Birthday.year > cd.year);//�������� �� ��, ��� �������� ��� ������ ��������
		cout << "\t\t\t\t������� �����: "; do { cin >> people[i].Birthday.Month;
		if (people[i].Birthday.Month > 12) cout << "\n����� ������ �������, ��������� ������� �����:  "; } while (people[i].Birthday.Month > 12);
		cout << "\t\t\t\t������� ���� "; do { cin >> people[i].Birthday.day ;
		if (people[i].Birthday.day > month[people[i].Birthday.Month].DayAm) cout << "\n���� ������ �������, ��������� ������� �����:  ";} while (people[i].Birthday.day > month[people[i].Birthday.Month].DayAm);
		
		people[i].accepted = 1;
		Sleep(2500);
		system("cls");
	}
		for (int i = 0; i < N; i++)
			if (people[i].Birthday.year >= cd.year-18)
			{
				if (people[i].Birthday.year == cd.year-18)
					if (people[i].Birthday.Month >= cd.month)
					{
						if (people[i].Birthday.Month == cd.month)
						{
							if (people[i].Birthday.day >= cd.day)
							{
								if (people[i].Birthday.day > cd.day)
								{
									n--; people[i].accepted = 0;
								}
							}
						}
						else { n--; people[i].accepted = 0;  }
					}
					else { n--; people[i].accepted = 0;  }
				else { n--; people[i].accepted = 0;  }
			}

	



	system("cls");

	for (int i = 0; i < n; i++)
	{

		if (people[i].accepted == 0) // �������� �������� ���� �� �� �������� �� ��������
		{
			Person* people2 = new Person[N-1];

			for (int i = 0; i < N - 1; i++)
				people2[i] = people[i+1];

			delete[] people;
			people = people2;
		}


		cout << "\n\n\n\n\n";
		cout << "\t\t\t\t~~~~~~~~~~������� N" << i + 1 << "~~~~~~~~~~\n";
		cout << "\t\t\t\t���: " << people[i].name << endl;
		cout << "\t\t\t\t�������: " << people[i].surname << endl;
		cout << "\t\t\t\t��������: " << people[i].patronymic << endl;
		cout << "\t\t\t\t\t~~~���� ��������~~~\n";
		cout << "\n\t\t\t\t����: " << people[i].Birthday.day << endl;
		cout << "\t\t\t\t�����: " << people[i].Birthday.Month << endl;
		cout << "\t\t\t\t���: " << people[i].Birthday.year << endl << endl;

		Sleep(2500);
		system("cls");
	}
	
	return 0;
}