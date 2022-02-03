#include<iostream>

using namespace std;

struct Time
{
	int sec;
	int min;
	int hour;
};

void main()
{
	setlocale(0, "");
	Time t;
	cout << "Введите секунды: "; cin >> t.sec; cout << endl;
	cout << "Введите минуты: "; cin >> t.min; cout << endl;
	cout << "Введите часы: "; cin >> t.hour; cout << endl;
	long totalsens = t.hour * 3600 + t.min * 60 + t.sec;
	cout << " = Секунд: "<< totalsens << "\n\n";


	Time t1, t2, sum;
	int long totalsecs1 = 0; int long totalsecs2 = 0;
	cout << "Введите поочередно часы минуты и секунды: ";
	cin >> t1.hour >> t1.min >> t1.sec;
	cout << "Введите поочередно часы минуты и секунды: ";
	cin >> t2.hour >> t2.min >> t2.sec;
	totalsecs1 = ((t1.hour * 3600) + (t1.min * 60) + t1.sec);
	totalsecs2 = ((t2.hour * 3600) + (t2.min * 60) + t2.sec);
	totalsecs1 += totalsecs2;

	sum.hour = totalsecs1 / 3600;
	sum.min = totalsecs1 % 3600 / 60;
	sum.sec = totalsecs1 % 3600 % 60;
	cout << sum.hour << ":" << sum.min << ":" << sum.sec;

}
