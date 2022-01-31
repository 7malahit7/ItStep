#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

class Animal
{
public:
	char Title[20];
	Animal(const char* t)
	{
		strcpy(Title, t);
	}
	virtual void speak() = 0;
};

class Frog : public Animal
{
public:
	Frog(const char* Title) :Animal(Title) {};
	virtual void speak()
	{
		cout << Title << " say " << "\'kwa-kwa\'\n";
	}
};
class Dog : public Animal
{
public:
	Dog(const char* Title) :Animal(Title) {};
	virtual void speak()
	{
		cout << Title << " say " << "\'gav-gav\'\n";
	}
};
class Cat : public Animal
{
public:
	Cat(const char* Title) :Animal(Title) {};
	virtual void speak()
	{
		cout << Title << " say " << "\'meow-meow\'\n";
	}
};
class Lion : public Cat
{
public:
	
	//virtual int speak()
	//{
	//cout <<Title << " say " << "\'rrr-rrr\'\n";
	//return 0;
	//}

	//virtual void speak()
	//{
	//cout <<Title << " say " << "\'rrr-rrr\'\n"
	//}


	Lion(const char* Title) :Cat(Title) {};
	virtual void speak(int When)
	{
		cout << Title << " say " << "\'rrr-rrr\'\n";
	}
};
void main()
{
	Animal* animals[4] = { new Dog("Bob"),new Cat("Murka"),new Frog("Vasya"),new Lion("King") };
	for (int k = 0; k < 4; k++)
		animals[k]->speak();
}
