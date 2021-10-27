#include<iostream>
#include "Student.h"

using namespace std;

Student::Student()
{
	name = nullptr;
	marks = nullptr;
	markCount = 0;
}

Student::Student(const char* studentName, const int studentMarkCount)
{
	createName(studentName);
	marks = new int[studentMarkCount];
	for (int i = 0; i < studentMarkCount; i++)
		marks[i] = 0;
	markCount = studentMarkCount;
}

Student::Student(const char* studentName, const int studentMarkCount, const int* studentMarks)
{
	createName(studentName);
	marks = new int[studentMarkCount];
	for (int i = 0; i < studentMarkCount; i++)
		marks[i] = studentMarks[i];
	markCount = studentMarkCount;
}

Student::~Student()
{
	if (name != nullptr)
		delete[] name;
	if (marks != nullptr)
		delete[] marks;
	cout << "Отработал деструктор" << endl;
	system("pause");
}

void Student::createName(const char* studentName)
{
	int nameLength = strlen(studentName);
	name = new char[nameLength + 1];
	for (int i = 0; i < nameLength; i++)
		name[i] = studentName[i];
}
void Student::setName(const char* studentName)
{
	delete[] name;
	createName(studentName);
}

void Student::setMark(int mark, int index)
{
	if (index < 0 || index >= markCount)
		return;
	if (mark < 1 || mark > 12)
		mark = 0;
	marks[index] = mark;
}

double Student::getAver()
{
	double sum = 0;
	for (int i = 0; i < markCount; i++)
		sum += marks[i];
	return sum / markCount;
}
