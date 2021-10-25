#include<iostream>
#include <string>
using namespace std;

//class DateClass
//{
//public:
//	int m_day;
//	int m_month;
//	int m_year;
//
//	void print()
//	{
//		cout << m_day << "/" << m_month << "/" << m_year;
//	}
//};
//int main()
//{
//	DateClass today{ 24,10,2021 };
//	today.m_day = 25;
//	today.print();
//	return 0;
//}

//class Employee
//{
//public:
//	string m_name;
//	int m_id;
//	double m_wage;
//
//	void print()
//	{
//		cout << "Name: " << m_name << "\nId: " << m_id << "\nWage: $" << m_wage << endl;
//	}
//};
//int main()
//{
//	Employee john{ "John",5,30.00 };
//	Employee max{ "Max",6,32.74 };
//	john.print();
//	cout << endl;
//	max.print();
//	return 0;
//}

//class Number
//{
//public:
//	int m_a;
//	int m_b;
//
//	void print()
//	{
//		cout << m_a << "\n" << m_b;
//	}
//	void set(int a, int b)
//	{
//		m_a = a;
//		m_b = b;
//	}
//};
//int main()
//{
//	Number n1;
//	n1.set(3, 4);
//	Number n2{ 5,6 };
//	n1.print();
//	cout << endl;
//	n2.print();
//	return 0;
//}

//class Fraction
//{
//public:
//	int m_numerator;
//	int m_denominator;
//
//
//	void add(Fraction fr2)
//	{
//		cout << m_numerator << "\\" << m_denominator << " + "<< fr2.m_numerator << "\\" << fr2.m_denominator << " = ";
//		cout << m_numerator * fr2.m_denominator + fr2.m_numerator*m_denominator << "\\" << m_denominator * fr2.m_denominator << endl;
//	}
//	void sub(Fraction fr2)
//	{
//		cout << m_numerator << "\\" << m_denominator << " - " << fr2.m_numerator << "\\" << fr2.m_denominator << " = ";
//		cout << m_numerator * fr2.m_denominator - fr2.m_numerator * m_denominator << "\\" << m_denominator * fr2.m_denominator << endl;
//	}
//	void mult(Fraction fr2)
//	{
//		cout << m_numerator << "\\" << m_denominator << " * " << fr2.m_numerator << "\\" << fr2.m_denominator << " = ";
//		cout << m_numerator * fr2.m_numerator << "\\" << m_denominator * fr2.m_denominator << endl;
//	}
//	void div(Fraction fr2)
//	{
//		cout << m_numerator << "\\" << m_denominator << " : " << fr2.m_numerator << "\\" << fr2.m_denominator << " = ";
//		cout << m_numerator * fr2.m_denominator << "\\" << m_denominator * fr2.m_numerator << endl;
//	}
//};
//int main()
//{
//	Fraction fr1{ 1,3 };
//	Fraction fr2{ 1,7 };
//
//	fr1.add(fr2);
//	fr1.sub(fr2);
//	fr1.mult(fr2);
//	fr1.div(fr2);
//
//
//	return 0;
//}

//class DateClass
//{
//	int m_day;
//	int m_month;
//	int m_year;
//public:
//	void setDate(int day, int month, int year)
//	{
//		m_day = day;
//		m_month = month;
//		m_year = year;
//	}
//	void print()
//	{
//		cout << m_day << "/" << m_month << "/" << m_year << endl;
//	}
//	void copyFrom(const DateClass& d)
//	{
//		m_day = d.m_day;
//		m_month = d.m_month;
//		m_year = d.m_year;
//	}
//};
//int main()
//{
//	DateClass date;
//	date.setDate(25,10,2021);
//	DateClass copy;
//	copy.copyFrom(date);
//	copy.print();
//
//
//	return 0;
//}


class Number {
public:
	float m_p1;
	float m_p2;
	float m_p3;



	void SetValue(float p1, float p2, float p3)
	{
		m_p1 = p1;
		m_p2 = p2;
		m_p3 = p3;
	}
	void print()
	{
		cout <<  m_p1 << "\t" << m_p2 << "\t" << m_p3 << "\n";
	}

	bool isEqual(Number point1)
	{
		if (m_p1 == point1.m_p1 && m_p2 == point1.m_p2 && m_p3 == point1.m_p3)
			return 1;
		else
			return 0;
	}

	void sr(Number point1)
	{
		if (m_p1 > point1.m_p1)
			cout << m_p1 << ">" << point1.m_p1 << endl;
		else
			cout << point1.m_p1 << ">" << m_p1 << endl;

		if (m_p2 > point1.m_p2)
			cout << m_p2 << ">" << point1.m_p2 << endl;
		else
			cout << point1.m_p2 << ">" << m_p2 << endl;

		if (m_p1 > point1.m_p2)
			cout << m_p3 << ">" << point1.m_p3 << endl;
		else
			cout << point1.m_p3 << ">" << m_p3 << endl;
	}
};


int main()
{
	Number point;
	point.SetValue(3.0, 4.0, 5.0);
	point.print();

	Number point2;
	point2.SetValue(3.0, 4.0, 5.0);

	Number point3;
	point3.SetValue(6.0, 7.0, 8.0);


	if (point.isEqual(point2))
		cout << "point and point2 are equal\n";
	else
		cout << "point and point2 are not equal\n";

	if (point.isEqual(point3))
		cout << "point and point3 are equal\n";
	else
		cout << "point and point3 are not equal\n";


	cout << endl;

	point.sr(point2);
	cout << endl;
	point.sr(point3);



	return 0;
}
