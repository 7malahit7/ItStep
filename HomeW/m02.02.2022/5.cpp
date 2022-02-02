#include<iostream>
#include<math.h>
using namespace std;




class Ur
{
protected:
	int a;
	int b;
public:
	Ur()
	{
		cout << "Введите a: " << endl; cin >> a;
		cout << "Введите b: " << endl; cin >> b;
	}
	virtual void Kor() = 0;
	

};

class LUr : public Ur
{
public:
	void Kor()
	{
		cout << -b / a;
	}
};
class KUr : public Ur
{
private:
	int c;
public:
	void Kor()
	{
		cout << "Введите c: "; cin >> c;
		double D; D = b * b - 4 * a * c;

		if (D > 0)
		{
			cout << "x1 = " << (-b + sqrt(D)) / (2 * a) << endl;
			cout << "x2 = " << (-b - sqrt(D)) / (2 * a) << endl;
		}
		else if (D < 0)
			cout << "Корней нету";
		else if (D == 0)
		{
			cout << -b / (2 * a);
		}
	}

};
void main()
{
	setlocale(0, "");
	LUr a;
	a.Kor();
	KUr b;
	b.Kor();
}
