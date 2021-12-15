#include<iostream>

using namespace std;

//узел списка 
struct Node
{
	//Информационная часть узла
	char data;
	//Указатель на следующий узел
	Node* next;
};
//Односвязный список
class List
{
	Node* Head;
	Node* Tail;
	int Count;
public:
	List();
	~List();
	void Add(char data);
	void Del();
	void DelAll();
	void Print();
	int GetCount();
};

List::List()
{
	Head = Tail = NULL;
	Count = 0;
}
List::~List()
{
	DelAll();
}
int List::GetCount()
{
	return Count;
}
void List::Add(char data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->next = NULL;
	if (Head != NULL)
	{
		Tail->next = temp;
		Tail = temp;
	}
	else
		Head = Tail = temp;
}
void List::Del()
{
	Node* temp = Head;
	Head = Head->next;
	delete temp;
}
void List::DelAll()
{
	while (Head != 0)
		Del();
}
void List::Print()
{
	Node* temp = Head;
	while (temp != 0)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n\n";
}

int main()
{
	List lst;
	char s[] = "Hello, World!!!\n";
	cout << s << "\n\n";
	int len = strlen(s);
	for (int i = 0; i < len; i++)
		lst.Add(s[i]);
	lst.Print();
	lst.Del();
	lst.Del();
	lst.Del();
	lst.Print();



	return 0;
}
