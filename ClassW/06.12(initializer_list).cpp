#include<iostream>
#include<conio.h>
#include<initializer_list>
using namespace std;

//void print()
//{}
//template<class First, class ...Other>
//void print(const First& first, const Other& ... other)
//{
//	cout << first;
//	print(other...);
//}
//template<class...Args>
//void println(const Args& ...args)
//{
//	print(args...);
//	cout << endl;
//}
//struct Point
//{
//	int x;
//	int y;
//	friend std::ostream& operator<<(std::ostream& output, const Point& p)
//	{
//		output << "(" << p.x << ";" << p.y << ")";
//		return output;
//		
//	}
//};
//
//int main()
//{
//	println("hello world");
//	println("Pi= ", 3.14, "\n", 2, "*", "=", 2 * 2);
//	Point point{ 12, 2 };
//	println("Point: ", point);
//
//	return 0;
//}
struct Point
{
	int x;
	int y;
	friend std::ostream& operator<<(std::ostream& output, const Point& p)
	{
	output << "(" << p.x << ";" << p.y << ")";
	return output;
	}
};
template<class T>
class IntArray
{
	int length;
	T* data;
public:
	IntArray() :length(0), data(nullptr)
	{

	}
	IntArray(int length) :length(length)
	{
		data = new T[length];
	}
	IntArray(const initializer_list<T>& list) :IntArray(list.size())
	{
		int i = 0;
		for (auto& element : list)
		{
			data[i] = element;
			i++;
		}
	}
	~IntArray()
	{
		delete[] data;
	}
	T& operator[](int index)
	{
		return data[index];
	}
	int getLength() const
	{
		return length;
	}
};

int main()
{

	IntArray<double> array{ 7,6,5,4,3,2,1 };
	for (int i = 0; i < 7; i++)
		cout << array[i] << " ";
	IntArray<Point> parr{ {1,4}, {4,9}, {1,2} };
	for (int i = 0; i < 3; i++)
		cout << parr[i] << " ";

	return 0;
}
