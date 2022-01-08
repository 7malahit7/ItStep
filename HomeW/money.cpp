#include<iostream>
using namespace std;

class money
{
	long int rub;
	unsigned int cop;
public:
	money(long r, unsigned int c)
	{
		rub = r; cop = c;
	}
	money()
	{
		rub = 0; cop = 0;
	}
	void print()
	{
		cout << rub << "," << cop << " rub.";
	}
	void add(money a2)
	{
		if (cop + a2.cop > 100)
		{
			cout << rub + a2.rub + 1 << "," << cop + a2.cop - 100 << "rub" << endl;
		}
		else
		{
			cout << rub + a2.rub << "," << cop + a2.cop << "rub" << endl;
		}
	}
	void mult(money a2)
	{
		money temp;
		temp.rub = rub * a2.rub;
		temp.cop = cop * a2.cop;
		while (temp.cop >= 100)
		{
			temp.rub++; temp.cop -= 100;
		}
		temp.print();
	}
	void sub(money a2)
	{
		if (cop - a2.cop > 100)
		{
			cout << rub - a2.rub + 1 << "," << cop - a2.cop - 100 << "rub" << endl;
		}
		else
		{
			cout << rub - a2.rub << "," << cop - a2.cop << "rub" << endl;
		}
	}
	bool isBigger(money a2)
	{
		if (rub > a2.rub)
			return 1;
		else if (rub == a2.rub)
		{
			if (cop > a2.cop)
				return 1;
			else
				return 0;
		}
		else return 0;
	}
};

int main()
{
	money a(10, 50);
	money b(20, 40);
	a.add(b); cout << endl;
	a.mult(b); cout << endl;
	a.sub(b); cout << endl;

	if (a.isBigger(b))
	{
		a.print(); cout << ">"; b.print();
	}
	else
	{
		b.print(); cout << ">"; a.print();
	}
	

	return 0;
}
