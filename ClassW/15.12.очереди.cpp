#include<iostream>
#include<string>
#include<time.h>
using namespace std;

class Queue
{
	int* Wait;
	int MaxQueueLength;
	int QueueLength;
	int *Pri;
public:
	Queue(int m);
	~Queue();
	void Add(int c,int p);
	int CQueue();
	int RQueue();
	int PQueue();
	void Clear();
	bool isEmpty();
	bool isFull();
	int GetCount();
	void Show();
};

void Queue::Show()
{
	cout << "\n--------------------------------\n";
	for (int i = 0; i < QueueLength; i++)
		cout << Wait[i] << "|" << Pri[i]<< "\n";
	cout << "\n--------------------------------\n";
}
Queue::Queue(int m)
{
	{
		MaxQueueLength = m;
		Wait = new int[MaxQueueLength];
		Pri = new int[MaxQueueLength];
		QueueLength = 0;
	}
}
Queue::~Queue()
{
	delete[]Wait;
	delete[]Pri;
}
void Queue::Clear()
{
	QueueLength = 0;
}
bool Queue::isEmpty()
{
	return QueueLength == 0;
}
bool Queue::isFull()
{
	return QueueLength == MaxQueueLength;
}
int Queue::GetCount()
{
	return QueueLength;
}
void Queue::Add(int c, int p)
{
	if (!isFull())
	{
		Wait[QueueLength] = c;
		Pri[QueueLength] = p;
		QueueLength++;
	}
}
/* обычная очередь */
int Queue::CQueue()
{
	if (!isEmpty())
	{
		int temp = Wait[0];
		for (int i = 1; i < QueueLength; i++)
			Wait[i - 1] = Wait[i];
		QueueLength--;
		return temp;
	}
	else
		return -1;
}

/* кольцевая очередь */
int Queue::RQueue()
{
	if (!isEmpty())
	{
		int temp = Wait[0];
		for (int i = 0; i < QueueLength - 1; i++)
			Wait[i] = Wait[i + 1];
		Wait[QueueLength - 1] = temp;
		return 1;
	}
	else 
		return -1;
}
/* очередь c приоритетом */
int Queue::PQueue()
{
	if (!isEmpty())
	{
		// приоритетный элемент - с высшим значенмием
		int max_pri = Pri[0];

		//приортетный индекс = 0
		int pos_max_pri = 0;

		//поиск приоритета
		for (int i = 1; i < QueueLength; i++)
			if (max_pri < Pri[i])
			{
				max_pri = Pri[i];
				pos_max_pri = i;
			}

		//вытаскиваем приоритетный элемент
		int temp = Wait[pos_max_pri];
		int templ = Pri[pos_max_pri];

		//сдвиг всех элементов 
		for (int i = pos_max_pri; i < QueueLength - 1; i++)
		{
			Wait[i] = Wait[i + 1];
			Pri[i] = Pri[i + 1];
		}
		QueueLength--;
		//возврат извлеченного элемента
		return temp;
	}

	else
		return -1;
}

int main()
{
	setlocale(0, "");
	srand(time(nullptr));

	Queue QU(25);
	for (int i = 0; i < 7; i++)
		QU.Add(rand() % 50, rand()%12);
	QU.Show();

	cout << "Обычная очередь."; QU.CQueue(); QU.Show();
	cout << "Кольцевая очередь." ;QU.RQueue(); QU.Show();
	cout << "Приоритетная очередь.";QU.PQueue();QU.Show();

	return 0;
}
