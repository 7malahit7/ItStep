#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
//////Класс "точка"
//class Point
//{
//protected:
//	int x;
//	int y;
//public:
//	Point()
//	{
//		x = 0; y = 0;
//	}
//	int& GetX()
//	{
//		return x;
//	}
//	int& GetY()
//	{
//		return y;
//	}
//};
//class MyWindows : public Point
//{
//	int width;
//	int height;
//public:
//	MyWindows(int w, int h)
//	{
//		width = w;
//		height = h;
//	}
//	int& GetWidth()
//	{
//		return width;
//	}
//	int& GetHeight()
//	{
//		return height;
//	}
//	void MoveX(int DX)
//	{
//		x += DX;
//	}
//	void MoveY(int DY)
//	{
//		y += DY;
//	}
//	void Show()
//	{
//		cout << "----------------------------------\n\n";
//		cout << " X = " << x << "\n\n";
//		cout << " Y = " << y << "\n\n";
//		cout << " W = " << width << "\n\n";
//		cout << " H = " << height << "\n\n";
//		cout << "----------------------------------\n\n";
//
//	}
//};


//class Roga
//{
//protected: 
//	char color[25];
//	int wes;
//public:
//	Roga()
//	{
//		strcpy(color, "Dirty");
//		wes = 20;
//	}
//	Roga(const char* c, int w)
//	{
//		strcpy(color, c); wes = w;
//	}
//
//};
//
//class Kopyta
//{
//protected:
//	char forma[25];
//		int razmer;
//public:
//	Kopyta()
//	{
//		strcpy(forma, "Big");
//		razmer = 10;
//	}
//	Kopyta( const char* f, int r)
//	{
//		strcpy(forma, f);
//		razmer = r;
//	}
//};
//class Los : public Roga, public Kopyta
//{
//public: 
//	char name[255];
//	Los( const char* c)
//	{
//		strcpy(name, c);
//	}
//	void DisplayInfo()
//	{
//		cout << "Name: " << name << "\n";
//		cout << "Shape: " << forma << "\n";
//		cout << "Color: " << color << "\n";
//		cout << "Wes rogov: " << wes << "\n";
//		cout << "Razmer kopyt: " << razmer << "\n";
//	}
//};
//
//void main()
//{
//	Los l("Vasya");
//	l.DisplayInfo();
//	
//}


//class Passport
//{
//protected:
//	int ser;
//	int num;
//	int day;
//	int month;
//	int year;
//	char name[25];
//	char surname[25];
//	char patr[25];
//public:
//	Passport()
//	{
//		ser = 0; num = 0; day = 0, month = 0, year = 0; strcpy(name, "None"), strcpy(surname, "None"), strcpy(patr, "None");
//	}
//
//	Passport(int s, int n, int d, int m, int y, const char* na, const char* su, const char* pa)
//	{
//		 day = d,month = m, ser = s; num = n; year = y; strcpy(name, na), strcpy(name, su), strcpy(name, pa);
//	}
//	void SetDay(int d)
//	{
//		day = d;
//	}
//	void SetMonth(int m)
//	{
//		month = m;
//	}
//	void SetYear(int y)
//	{
//		year = y;
//	}
//	void SetSurame(const char* n)
//	{
//		strcpy(surname, n);
//	}
//	void SetName(const char* n)
//	{
//		strcpy(name, n);
//	}
//	void SetPatr(const char* p)
//	{
//		strcpy(patr, p);
//	}
//};
//
//class ForeignPassport : public Passport
//{
//	char visa[25];
//	int num_f;
//public:
//	ForeignPassport()
//	{
//		strcpy(visa,"None");
//		num_f = 0;
//	}
//	ForeignPassport(const char* v, int n)
//	{
//		strcpy(visa, v);
//		num_f = n;
//	}
//	void SetVisa(const char* v)
//	{
//		strcpy(visa, v);
//	}
//	void SetNumf(int n)
//	{
//		num_f = n;
//	}
//	void display()
//	{
//		cout << "\n================|\nForeign passport|\n================|\n";
//		cout << "\nVisa: " << visa;
//		cout << "\nNum: " << num_f;
//		cout << "\n\nBirthday: ";
//		cout << "\n Day: " << day;
//		cout << "\n Month: " << month;
//		cout << "\n Year: " << year << endl;
//		cout << "\nName: " << name;
//		cout << "\nSurname: " << surname;
//		cout << "\nPatronomic: " << patr << endl;
//
//	}
//};
//
//void main()
//{
//	ForeignPassport A; 
//
//	A.SetDay(6);
//	A.SetMonth(7);
//	A.SetYear(2000);
//
//	A.SetName("Abc");
//	A.SetSurame("Qwe");
//	A.SetPatr("Zxc");
//
//	A.SetNumf(123456);
//	A.SetVisa("Asd fgh");
//
//	A.display();
//}

class Student
{
protected:
	char name[25];
	char surname[25];
	char patronomic[25];
	int day;
	int month;
	int year;
};

class Aspirant : public Student
{

};

void main()
{



}
