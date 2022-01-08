#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class String
{
	char *string;
	int length;

public:
	String()
	{
		length = 80;
		string = new char[length];
	}
	String(int length)
	{
		this->length = length;
		string = new char[length];
	}
	String(const char* t)
	{
		length = strlen(t);
		string = new char[length];
		strcpy(string, t);
	}
	~String()
	{
		delete[]string;
	}
	void print()
	{
		cout << string << "\t";
	}
	void input()
	{
		cin >> string;
	}
};

int main()
{
	String t1; String t2(10); String t3("Hello");
	t1.input();
	t2.input();

	t1.print();
	t2.print();
	t3.print();

	return 0;
}
