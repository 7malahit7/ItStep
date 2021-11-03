
#include<iostream> 
#include<ctime>
using namespace std;


//class Person
//{
//	char* name;
//	uint16_t age;
//	uint32_t socialId;
//public:
//	Person()
//		:name{ nullptr }, age{ 0 }, socialId{ 0 }
//	{
//		cout << "Person constructed\n";
//	}
//	//Person(const char* nameP)
//	//	:name{ new char[strlen(nameP) + 1] }, age{ 0 }, socialId{ 0 }
//	//{
//	//	strcpy_s(name, strlen(nameP) + 1, nameP);
//	//	cout << "Person constructed\n";
//	//}
//	//Person(const char* nameP, uint16_t ageP)
//	//	:name{ new char[strlen(nameP) + 1] }, age{ ageP }, socialId{ 0 }
//	//{
//	//	strcpy_s(name, strlen(nameP) + 1, nameP);
//	//	cout << "Person constructed\n";
//	//}
//	Person(const char* nameP, uint16_t ageP, uint32_t socialIdP)
//		:name{ name ? new char[strlen(nameP) + 1]:nullptr }, age{ ageP }, socialId{ socialIdP }
//	{
//		if (name)
//			strcpy_s(name, strlen(nameP) + 1, nameP);
//		cout << "Person constructed\n";
//	}
//	Person(const char* nameP):Person(nameP,0,0){}
//	Person(const char* nameP, uint16_t ageP):Person(nameP,ageP,0) {}
//		
//
//	~Person()
//	{
//		delete[]name;
//		cout << "Person destructed\n";
//	}
//	void print()
//	{
//		if (name)
//		{
//			cout << "Name: " << name << endl << "Age: " << age << endl << "SocialId" << socialId << endl;
//		}
//		else
//			cout << "[empty person]" << endl;
//	}
//
//};

class NumberStorage
{
	int* storage;
	uint32_t elementCount;
	static uint32_t usedMemory;
public:
	NumberStorage(uint32_t elementCountP) :storage{ new int[elementCountP] }, elementCount{ elementCountP }
	{
		uint32_t used{ elementCount * sizeof(int) };
		usedMemory += used;
		cout << "NumberStorage: additional " << used << " bytes. Total used: " << usedMemory << endl;
		for (uint32_t i{ 0 }; i < elementCount; ++i)
			storage[i] = rand() % 10;
	}
	~NumberStorage()
	{
		uint32_t freed{ elementCount * sizeof(int) };
		delete[]storage;
		usedMemory -= freed;
		cout << "NumberStorage: freed " << freed << " bytes. Total used: " << usedMemory << endl;
	}
	void print()
	{
		for (uint32_t i{ 0 }; i < elementCount; ++i)
			cout << storage[i] << "\t";
		cout << endl;

	}
	static uint32_t getUsedMemory()
	{
		return usedMemory;
	}


};
uint32_t NumberStorage::usedMemory{ 0 };
int main()
{
	//Person nobody;
	//nobody.print();
	//Person person1{ "Petrov Petr" };
	//person1.print();
	//Person person2{ "Ivanov Ivan",34 };
	//person2.print();
	//Person person3{ "Sidorov Sidor",54, 1703 };
	//person3.print();
	srand(time(nullptr));
	cout << "Total memory used: " << NumberStorage::getUsedMemory() << endl;
	const  int poolSize{ 3 };
	NumberStorage pool[poolSize]{ rand() % 101, rand() % 101,rand() % 101 };
	cout << "Total Memory used: " << NumberStorage::getUsedMemory() << endl;




	return 0;
}
