#include<iostream>

using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;

public:
	Fraction(int numerator = 0, int denominator = 1)
	{
		this->numerator = numerator;
		if (denominator != 0)
			this->denominator = denominator; 
		else
			this->denominator = 1;
		nod();
	}

	void setDenominator(int denominator)
	{
		this->numerator = numerator;
		if (denominator != 0)
			this->denominator = denominator;
		else
			this->denominator = 1;
		nod();
	}

	void setNumerator(int numerator)
	{
		this->numerator = numerator;
		nod();
	}
	int getDenominator()
	{
		return this->denominator;
	}
	int getNumerator()
	{
		return this->numerator;
	}

	void nod() {
		int n = numerator;
		int d = denominator;

		while (n != 0 && d != 0)
		{
			if (n > d)
				n %= d;
			else
				d %= n;
		}
		int nod = n + d;
		numerator /= nod;
		denominator /=+ nod;

	}

	void Show()
	{
		cout << "[" << this->numerator << "/" << this->denominator << "]";
	}

	Fraction Add(Fraction fobj)
	{
		Fraction temp;
		temp.numerator = this->numerator * fobj.denominator + this->denominator * fobj.numerator;
		temp.denominator = this->denominator * fobj.denominator;
		temp.nod();
		return temp;
	}

};

int main()
{
	Fraction f1(5,6);
	Fraction f2(2, 3);
	Fraction f3(3, 8);
	f1.Add(f2).Add(f3).Show();

	Fraction* pf = new Fraction(11,15);
	pf->Show();
	return 0;
}
