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
		denominator /= +nod;
	}
	static Fraction Add(const Fraction& fr1, const Fraction& fr2)
	{
		return Fraction(fr1.numerator * fr2.denominator + fr1.denominator * fr2.numerator, fr1.denominator * fr2.denominator);
	}
	static Fraction Sub(const Fraction& fr1, const Fraction& fr2)
	{
		return Fraction(fr1.numerator * fr2.denominator - fr1.denominator * fr2.numerator, fr1.denominator * fr2.denominator);
	}
	static Fraction Mult(const Fraction& fr1, const Fraction& fr2)
	{
		return Fraction(fr1.numerator * fr2.numerator, fr1.denominator * fr2.denominator);
	}
	static Fraction Div(const Fraction& fr1, const Fraction& fr2)
	{
		return Fraction(fr1.numerator * fr2.numerator, fr1.denominator * fr2.numerator);
	}
	static bool isEqual(const Fraction& fr1, const Fraction& fr2)
	{
		return fr1.numerator == fr2.numerator && fr1.denominator == fr2.denominator;
	}
	static bool isBigger(const Fraction& fr1, const Fraction& fr2)
	{
		return fr1.numerator * fr2.denominator > fr2.numerator * fr1.denominator;
	}
	static Fraction inc(const Fraction& fr1)
	{
		Fraction inc(1, fr1.denominator);
		return Add(inc, fr1);
	}
	static Fraction dec(const Fraction& fr1)
	{
		Fraction dec(1, fr1.denominator);
		return Sub(fr1, dec);
	}


	friend Fraction operator+(const Fraction& fr1, const Fraction& fr2)
	{
		return Add(fr1, fr2);
	}
	friend Fraction operator-(const Fraction& fr1, const Fraction& fr2)
	{
		return Sub(fr1, fr2);
	}
	friend Fraction operator*(const Fraction fr1, const Fraction& fr2)
	{
		return Mult(fr1, fr2);
	}
	friend Fraction operator/(const Fraction fr1, const Fraction& fr2)
	{
		return Div(fr1, fr2);
	}
	friend bool operator==(const Fraction fr1, const Fraction fr2)
	{
		return isEqual(fr1, fr2);
	}
	friend bool operator!=(const Fraction fr1, const Fraction fr2)
	{
		if (isEqual(fr1, fr2) == 0)
			return 1;
		else
			return 0;
	}
	friend bool operator>(const Fraction fr1, const Fraction fr2)
	{
		return isBigger(fr1, fr2);
	}
	friend bool operator<(const Fraction fr1, const Fraction fr2)
	{
		if (isBigger(fr1, fr2) == 0 && isEqual(fr1, fr2) == 0)
			return 1;
		else
			return 0;
	}
	friend bool operator>=(const Fraction fr1, const Fraction fr2)
	{
		return isBigger(fr1, fr2) || isEqual(fr1, fr2);
	}
	friend bool operator<=(const Fraction fr1, const Fraction fr2)
	{
		if (isBigger(fr1, fr2) == 0 || isEqual(fr1, fr2) == 1)
			return 1;
		else
			return 0;
	}
	friend Fraction operator*(const Fraction fr1)
	{
		return Mult(fr1, fr1);
	}
	friend Fraction operator++(const Fraction fr1)
	{
		return inc(fr1);
	}
	friend Fraction operator--(const Fraction fr1)
	{
		return dec(fr1);
	}
	friend ostream& operator<<(ostream& output, const Fraction& fr)
	{
		output << "[" << fr.numerator << "/" << fr.denominator << "]";
		return output;
	}
	friend istream& operator>>(istream& in, Fraction& fr)
	{
		in >> fr.numerator;
		in >> fr.denominator;

		return in;
	}
};

int main()
{

	Fraction f1(1, 4);
	Fraction f2(1, 2);
	Fraction f3;
	cout << f1 << " + " << f2 << " = " << f1 + f2 << endl;
	cout << f1 << " - " << f2 << " = " << f2 - f1 << endl;
	cout << f1 << " * " << f2 << " = " << f2 * f1 << endl;
	cout << f1 << " / " << f2 << " = " << f2 / f1 << endl;
	cout << f1 << "^2 = " << *f1 << endl;
	if (f2 == f2)
		cout << f2 << " = " << f2 << endl;
	if (f2 > f1)
		cout << f2 << "  > " << f1 << endl;
	if (f1 < f2)
		cout << f1 << "  < " << f2 << endl;
	if(f1!=f2)
		cout << f1 << " != " << f2 << endl;
	if (f2 >= f1)
		cout << f2 << " >= " << f1 << endl;
	if (f2 >= f2)
		cout << f2 << " >= " << f2 << endl;
	if (f2 <= f2)
		cout << f2 << " <= " << f2 << endl;
	if (f1 <= f2)
		cout << f1 << " <= " << f2 << endl;
	cout << "Input numerator and denominator: "; cin >> f3; cout << "You entered: " << f3 << endl;
	cout << f3 << "++  = " << ++f3 << endl;
	cout << f3 << "--  = " << --f3 << endl;
	return 0;
}


