#include<iostream>

using namespace std;


//узел списка 
struct Element
{
	//Информационная часть узла
	int data;
	//Указатели на следующий и предидущий узел
	Element* next = 0;
	Element* prev = 0;
};
//Односвязный список
class List
{
	Element* Head;
	Element* Tail;
	int Count;
public:
	List();
	List(const List& L);
	~List();
	//void Add(char data);
	void AddHead(int n);
	void AddTail(int n);
	void Insert(int pos);
	void Del(int pos);
	void DelAll();
	void Print();
	void Print(int pos);
	int GetCount();
	Element* GetElement(int pos);

	List operator+ (const List& L)
	{
		List Result(*this);
		Element* temp = L.Head;
		while (temp != 0)
		{
			Result.AddTail(temp->data);
			temp = temp->next;
		}
		return *this;
	}
	List operator = (const List& L)
	{
		if (this == &L)
		{
			return *this;
		}
		this->~List();
		Element* temp = L.Head;
		while (temp != 0)
		{
			AddTail(temp->data);
			temp = temp->next;
		}
		return *this;
	}
	bool operator == (const List& L)
	{
		if (Count != L.Count)
			return false;
		Element* t1;
		Element* t2;
		t1 = Head;
		t2 = L.Head;
		while (t1 != 0)
		{
			if (t1->data != t2->data)
				return false;
			t1 = t1->next;
			t2 = t2->next;
		}
		return true;
	}
	bool operator !=(const List& L)
	{
		return !(*this == L);
	}
	bool operator >=(const List& L)
	{
		if (Count > L.Count)
			return true;
		if (*this == L)
			return true;
		return false;
	}
	bool operator <=(const List& L)
	{
		if (Count < L.Count)
			return true;
		if (*this == L)
			return true;
		return false;
	}
	bool operator >(const List& L)
	{
		if (Count > L.Count)
			return true;
		return false;
	}
	bool operator <(const List& L)
	{
		if (Count < L.Count)
			return true;
		return false;
	}
	List operator -()
	{
		List Result;
		Element* temp = Head;
		while (temp != 0)
		{
			Result.AddHead(temp->data);
			temp = temp->next;
		}
		return Result;
	}

};

List::List()
{
	Head = Tail = NULL;
	Count = 0;
}
List::List(const List& L)
{
	Head = Tail = NULL;
	Count = 0;
	//Голова списка, из которого копируем
	Element* temp = L.Head;
	//пока не конец списка
	while (temp != 0)
	{
		//Передаем данные
		AddTail(temp->data);
		temp = temp->next;
	}
}
List::~List()
{
	DelAll();
}
int List::GetCount()
{
	return Count;
}
//int List::GetElement()
//{
//	return Element;
//}
//void List::Add(char data)
//{
//	Element* temp = new Element;
//	temp->data = data;
//	temp->next = NULL;
//	if (Head != NULL)
//	{
//		Tail->next = temp;
//		Tail = temp;
//	}
//	else
//		Head = Tail = temp;
//}
void List::AddHead(int n)
{
	Element* temp = new Element;
	temp->prev = 0;
	temp->data = n;
	temp->next = Head;
	if (Head != 0)
		Head->prev = temp;
	if (Count == 0)
		Head = Tail = temp;
	else
		Head = temp;
	Count++;
}
void List::AddTail(int n)
{
	Element* temp = new Element;
	temp->prev = 0;
	temp->data = n;
	temp->prev = Tail;
	if (Tail != 0)
		Tail->next = temp;
	if (Count == 0)
		Head = Tail = temp;
	else
		Tail = temp;
	Count++;
}
void List::Insert(int pos = 0)
{
	if (pos == 0)
	{
		cout << " Enter position: ";
		cin >> pos;
	}
	if (pos<1 || pos>Count + 1)
	{
		cout << " Position isn't correct!! ";
		return;
	}
	if (pos = Count + 1)
	{
		int data;
		cout << " Enter something: ";
		cin >> data;
		AddTail(data);
		return;
	}
	else if (pos == 1)
	{
		int data;
		cout << " Enter position: ";
		cin >> data;
		AddHead(data);
		return;
	}
	int i = 1;
	Element* Ins = Head;
	while (i < pos)
	{
		Ins = Ins->next;
		i++;
	}
	Element* PrevIns = Ins->prev;
	Element* temp = new Element;
	cout << "Enter something: ";
	cin >> temp->data;
	if (PrevIns != 0 && Count != 1)
	{
		PrevIns-> next = temp;
	}
	temp->next = Ins;
	temp->prev = PrevIns;
	Ins->prev = temp;
	Count++;
}

void List::DelAll()
{
	while (Count != 0)
		Del(1);
}
void List::Print()
{
	Element* temp = Head;
	cout << "(";
	while (temp->next != 0)
	{
		cout << temp->data << " ";
		temp = temp->next;
	} cout << temp->data<< ")\n";
}
void List::Print(int pos)
{
	if (pos<1 || pos>Count)
	{
		cout << "Incorrect position!!\n";
		return;
	}
	Element* temp;
	if (pos <= Count / 2)
	{
		temp = Head;
		int i = 1;
		while (i < pos)
		{
			temp = temp->next;
			i++;
		}
	}
	else
	{
		temp = Tail;
		int i = 1;
		while (i < Count - pos)
		{
			temp = temp->prev;
			i++;
		}
	}
	cout << pos << " Element ";
	cout << temp->data << endl;
}
Element* List::GetElement(int pos)
{
	Element* temp = Head;
	if (pos<1 || pos > Count)
	{
		cout << " Position isn't correct";
		return 0;
	}
	int i = 1;
	while (i < pos && temp != 0)
	{
		temp = temp->next;
		i++;
	}
	if (temp == 0)
	{
		return 0;
	}
	else
		return temp;

}
void List::Del(int pos = 0)
{
	if (pos == 0)
	{
		cout << " Enter position: ";
		cin >> pos;
	}
	if (pos<1 || pos>Count)
	{
		cout << " Position isn't correct";
		return;
	}
	int i = 1;
	Element* Del = Head;
	while (i < pos)
	{
		Del = Del->next;
		i++;
	}
	Element* PrevDel = Del->prev;
	Element* AfterDel = Del->next;
	if (PrevDel != 0 && Count != 1)
		PrevDel->next = AfterDel;
	if (AfterDel != 0 && Count != 1)
		AfterDel->prev = PrevDel;
	if (pos == 1)
		Head = AfterDel;
	if (pos == Count)
		Tail = PrevDel;
	delete Del;
	Count--;
}


int main()
{
	List L;
	const int n = 10;
	int a[n] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			L.AddHead(a[i]);
		else
			L.AddTail(a[i]);
	}
	cout << "List L: \n";
	L.Print();
	L.Insert();
	cout << "List L: \n";
	L.Print();
	L.Print(2);
	L.Print(8);
	List T;
	T = L;
	cout << " List T: \n";
	T.Print();
	cout << " List Sum: \n";
	List Sum = -L + T;
	Sum.Print();

	return 0;
}
