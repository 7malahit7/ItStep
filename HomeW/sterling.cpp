#include <iostream>
using namespace std;

struct sterling
{
	int pounds;
	int shillings;
	int pence;
};

void main()
{
	double pounds;
	sterling money;

	cout << "Input pounds: ";
	cin >> pounds;

	money.pence = pounds * 240;
	money.shillings = money.pence % 240 / 12;
	money.pounds = money.pence / 240;
	money.pence = money.pence % 240 % 12;
	cout << "Pounds: "<<money.pounds << "\nShillings: " << money.shillings << "\nPence: " << money.pence;
}
