#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#define NMAX 100
using namespace std;


struct MyStack
{
	float elem[NMAX];
	int top;

};
void init(struct MyStack* stk)
{
	stk->top = 0;

}
void push(struct MyStack* stk, float f)
{
	if (stk->top < NMAX)
	{
		stk->elem[stk->top] = f;
		stk->top++;
	}
	else
		cout << "Стэк переполнен";
}
float pop(struct MyStack* stk)
{
	float elem;
	if ((stk->top) > 0)
	{
		stk->top--;
		elem = stk->elem[stk->top];
		return elem;
	}
	else
	{
		return 0;
	}
}
float stkTop(MyStack* stk)
{
	if ((stk->top) > 0)
		return stk->elem[stk->top - 1];
	else
		cout << "Стэк пуст!\n";
	return 0;
}
int getcount(struct MyStack *stk)
{
	return stk->top;
}
int isEmpty(struct MyStack *stk)
{
	if (stk->top == 0)
		return 1;
	else
		return 0;

}
void stkPrint(struct MyStack* stk)
{
	int i;
	i = stk->top;
	if (isEmpty(stk) == 1)
		return;
	do
	{
		i--;
		cout << stk->elem[i] << " ";
	} while (i > 0);
}


int main()
{
	system("chcp 1251"); system("cls");
	MyStack* stk;
	int i, n;
	float elem;
	stk = (MyStack*)malloc(sizeof(MyStack));
	init(stk);
	printf("Введите к-во элементов в стэке: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Введите элемент %d: ", i+1);
		scanf("%f", &elem);
		push(stk, elem);
	}
	printf("В стэке %d элементa(ов)\n\n", getcount(stk));
	stkPrint(stk);
	printf("Верхний элемент %f\n", stkTop(stk));
	do {
		printf("Извлекаем элемент %f, ", pop(stk));
		printf("в стэке осталось %d элемента(ов)\n", getcount(stk));
	} while (isEmpty(stk) == 0);
	getchar(); getchar();


	return 0;
}
