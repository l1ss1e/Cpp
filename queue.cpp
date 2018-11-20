#include "pch.h"
#include <iostream>

using namespace std;
int Queue[100], backInd= -1, frontInd=0;
void push(int x)
{
	++backInd;
	//++frontInd;
	Queue[backInd] = x;
}
bool isEmpty()
{
	if (frontInd > backInd) return true;
	else return false;
}
void pop()
{
	Queue[frontInd] = 0;
	++frontInd;
}
int front()
{
	return Queue[frontInd];
}
int main()
{
	push(9);
	push(8);
	push(7);
	pop();
	push(9);
	push(8);
	push(7);
	pop();
	push(9);
	push(8);
	push(7);
	pop();
	push(3);
	if (!isEmpty())
		for (int i = frontInd; i < backInd;  i++) cout << Queue[i] << " ";
	cout << "  front is"<<front();
	return 0;
}