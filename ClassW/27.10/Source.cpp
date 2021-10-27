#include<iostream>
#include "Student.h"
#include <iomanip>
#include <conio.h>
using namespace std;

//class Date
//{
//	int m_day;
//	int m_month;
//	int m_year;
//public:
//	int getDay() { return m_day; };
//	void setDay(int day) { m_day = day; };
//
//	int getMonth() { return m_month; };
//	void setMonth(int month) { m_month = month; };
//
//
//	int getYear() { return m_year; };
//	void setYear(int year) { m_year = year; };
//};
//
//
//
//int main()
//{
//	Date d;  
//	d.setDay(27); d.setMonth(10); d.setYear(2021);
//	cout << d.getDay() << "/" << d.getMonth() << "/" << d.getYear();
//
//	return 0;
//}


//class Fraction
//{
//	int m_numerator;
//	int m_denominator;
//
//public:
//	//Fraction()
//	//{
//	//	m_numerator = 0;
//	//	m_denominator = 1;
//	//}
//	//int getNumerator()
//	//{
//	//	return m_numerator;
//	//}
//	//int getDenominator()
//	//{
//	//	return m_denominator;
//	//}
//	Fraction(int numerator=0, int denominator = 1) // конструктор
//	{
//		do {
//			if (denominator == 0) {
//				cout << "На 0 делить нельзя. Повторите ввод: ";
//				cin >> denominator;
//			}
//		} while (denominator == 0);
//		m_numerator = numerator;
//		m_denominator = denominator;
//	}
//	int getNumerator() { return m_numerator; }
//	int getDemuminator() { return m_denominator; }
//};
//int main()
//{
//	setlocale(0, "");
//	Fraction(0, 0);
//
//
//	return 0;
//}

	
int main()
{
	setlocale(0, "");
	const int size = 2;
	cout << "Успеваемость студента.\n\n";
	//Student student("Петров А.И", 3, new int[3]{ 10,10,9 });
	//cout << "Средний балл " << student.getName() << ": " << fixed << setprecision(2) << student.getAver() << endl;
	Student* students = new Student[size]
	{
		{"Студент 1",3,new int[3]{10,9,9}},
		{"Студент 2",3,new int[3]{8,10,8}}
	};
	double sum = 0;
	for (Student* stud = students; stud < students + size; stud++)
	{
		double aver = stud->getAver();
		cout << "Средний балл " << stud->getName() << ": " << fixed << setprecision(2)<< aver << endl;
		sum += aver;
	}
	cout << endl;
	cout << "Средний балл  " << fixed << setprecision(2) << sum/size <<endl;
	delete[]students;
	_getch();
	return 0;
}
